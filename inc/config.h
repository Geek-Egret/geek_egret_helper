#ifndef CONFIG_H
#define CONFIG_H

#include "common.h"

// 注意是要相对于可执行文件的路径/绝对路径
#define CONFIG_FOLDER_PATH (std::string)("..\\config")
#define DEVICE_NUM_LIMIT 8

extern QString windowBackGroundColor;
extern QString windowBorderRadius;
extern QString windowBorderColor;
extern QString mainWindowStyle;
extern QString childWindowStyle;
extern QString buttonHoverBackgroundColor;
extern QString buttonColorAction;
extern QString deviceButtonAction;
extern int greetWindowShowTime;
extern int greetingReflashTime;

extern char32_t  emojiUnicodeRange[3][2];

namespace GeekEgret
{
	void configSet();
}

#endif