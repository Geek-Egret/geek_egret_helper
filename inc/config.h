#ifndef CONFIG_H
#define CONFIG_H

#include "common.h"

// 注意是要相对于可执行文件的路径/绝对路径
#define CONFIG_FOLDER_PATH (std::string)("..\\config")

extern QString mainWindowStyle;
extern QString childWindowStyle;
extern QString buttonColorAction;
extern QString deviceButtonAction;
extern int greetWindowShowTime;
extern int greetingReflashTime;
extern std::vector<std::string> addedDeviceLists;
extern int allDeviceNum;

extern char32_t  emojiUnicodeRange[3][2];

// 设备列表
typedef struct 
{
	std::string deviceName;	// 设备名
	std::string deviceImgPath;	// 设备图片路径
	void (*deviceAPP)(void);	// 设备应用
}deviceList;
extern deviceList deviceLists[];

#endif