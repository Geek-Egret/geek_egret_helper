#include "common.h"

void GE::JSON::configFileRead(CONFIG_FILE_FLAG configFileFlag)
{
	switch (configFileFlag)
	{
		case CONFIG: {
			// 解析JSON
			std::ifstream configFile(CONFIG_FOLDER_PATH + "\\config.json");
			configFile >> config_json;
			configFile.close();
			// 读取软件设置
			optionsChoosingColor = QString::fromStdString("background:"+(std::string)config_json["OPTIONS_CHOOSING_COLOR"]);
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
		// 解析JSON
		std::ifstream configFile(CONFIG_FOLDER_PATH + "\\config.json");
		configFile >> config_json;
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