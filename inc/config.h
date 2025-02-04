#ifndef CONFIG_H
#define CONFIG_H

#include "common.h"

#define TOTAL_APP_NUM 2
// 注意是要相对于可执行文件的路径/绝对路径
#define CONFIG_FOLDER_PATH (std::string)("..\\config")

extern QString mainWindowStyle;
extern QString childWindowStyle;
extern QString buttonColorAction;

extern char32_t  emojiUnicodeRange[3][2];

#endif