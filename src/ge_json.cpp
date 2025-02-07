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
			windowBackGroundColor = QString::fromStdString(config_json["WINDOW_BACKGROUND_COLOR"]);
			windowBorderRadius = QString::fromStdString(config_json["WINDOW_BORDER_RADIUS"]);
			windowBorderColor = QString::fromStdString(config_json["WINDOW_BORDER_COLOR"]);
			buttonHoverBackgroundColor = QString::fromStdString(config_json["BUTTON_HOVER_BACKGROUND_COLOR"]);
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