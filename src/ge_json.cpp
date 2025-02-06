#include "common.h"

void GE::JSON::configFileRead(CONFIG_FILE_FLAG configFileFlag)
{
	switch (configFileFlag)
	{
		case CONFIG: {
			addedDeviceLists.clear();
			// 解析JSON
			std::ifstream configFile(CONFIG_FOLDER_PATH + "\\config.json");
			configFile >> config_json;
			configFile.close();
			// 读取软件设置
			/* 窗口背景颜色 */
			mainWindowStyle = QString::fromStdString(
				"QMainWindow{"
				"background-color:" + (std::string)config_json["WINDOW_BACKGROUND_COLOR"] + ";"   // 背景颜色
				"border-radius:" + (std::string)config_json["WINDOW_BORDER_RADIUS"] + ";"  // 圆角直径
				"border-style:solid;"   // 边框线条风格
				"border-width:2px;"     // 边框线条宽度
				"border-color:" + (std::string)config_json["WINDOW_BACKGROUND_COLOR"] + ";"   // 边框颜色
				"}");
			childWindowStyle = QString::fromStdString(
				"QWidget{"
				"background-color:" + (std::string)config_json["WINDOW_BACKGROUND_COLOR"] + ";"   // 背景颜色
				"border-radius:" + (std::string)config_json["WINDOW_BORDER_RADIUS"] + ";"  // 圆角直径
				"border-style:solid;"   // 边框线条风格
				"border-width:2px;"     // 边框线条宽度
				"border-color:" + (std::string)config_json["WINDOW_BACKGROUND_COLOR"] + ";"   // 边框颜色
				"}");
			/* 按键颜色动作 */
			buttonColorAction = QString::fromStdString(
				"QPushButton{background:"+(std::string)config_json["WINDOW_BACKGROUND_COLOR"]+";}"	// 按键正常背景颜色
				"QPushButton:hover{background-color:"+(std::string)config_json["BUTTON_HOVER_BACKGROUND_COLOR"]+
				";}");	// 鼠标划过背景颜色
			greetWindowShowTime = (int)config_json["GREET_WINDOW_SHOW_TIME"];	// 欢迎窗口显示时间
			greetingReflashTime = (int)config_json["GREETING_REFLASH_TIME"];	// 问候语刷新时间
			/* 已添加的设备 */
			if (config_json["ADDED_DEVICE_LISTS"].is_array())
			{
				for (const auto& addedDevice : config_json["ADDED_DEVICE_LISTS"])
				{
					if (addedDevice.is_string());
						 addedDeviceLists.push_back(addedDevice.get<std::string>());
				}
			}
			break;
		}
		case PATHS: {
			// 解析JSON
			std::ifstream configFile(CONFIG_FOLDER_PATH + "\\exePaths.json");
			configFile >> exePaths_json;
			configFile.close();
			// 设置应用路径
			exePaths.clear();
			exePaths.push_back(QDir::toNativeSeparators(QString::fromStdString(exePaths_json["ADC_UPPER_APP"])));
			exePaths.push_back(QDir::toNativeSeparators(QString::fromStdString(exePaths_json["GUITAR_WIRELESS_HELPER_APP"])));
			break;
		}
	}
}


void GE::JSON::configFileWrite(CONFIG_FILE_FLAG configFileFlag)
{
	switch (configFileFlag)
	{
		case CONFIG: {
			std::ofstream configFile(CONFIG_FOLDER_PATH + "\\econfig.json");

			// 更改数据
			config_json["WINDOW_BACKGROUND_COLOR"];
			config_json["WINDOW_BORDER_RADIUS"] = exePaths[1].toStdString();

			// 写入
			configFile << exePaths_json.dump(4); // 4个空格缩进
			configFile.close();
			break;
		}
		case PATHS: {
			std::ofstream configFile(CONFIG_FOLDER_PATH + "\\exePaths.json");

			// 更改数据
			exePaths_json["ADC_UPPER_APP"] = exePaths[0].toStdString();
			exePaths_json["GUITAR_WIRELESS_HELPER_APP"] = exePaths[1].toStdString();

			// 写入
			configFile << exePaths_json.dump(4); // 4个空格缩进
			configFile.close();

			break;
		}
	}
}

GE::JSON JSON;