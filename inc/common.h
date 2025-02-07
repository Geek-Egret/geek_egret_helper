#ifndef COMMON_H
#define COMMON_H

// C++标准库
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdint>
#include <random>

// QT
#include <QDir>
#include <QFileDialog>
#include <QProcess>
#include <QDesktopServices>
#include <QUrl>
#include <QMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QTimer>
#include <QScrollBar>
#include <QPushButton>
#include <QVBoxLayout>
#include <QScrollArea>

// LIB
#include "json.hpp"

// 平台头文件
#ifdef WINDOWS
	#include <windows.h>
#endif
#ifdef LINUX
	// Linux端系统头文件
#endif

// 用户头文件
#include "main_window.h"
#include "greet_window.h"
#include "config_window.h"
#include "tool_window.h"
#include "ge_json.h"
#include "config.h"

namespace GeekEgret
{
	extern mainWindow* Main;

	// Emoji Unicode随机生成器
	char32_t randomEmojiUnicode(char32_t min, char32_t max);

	// int随机生成器
	int randomInt(int min, int max);
}

#endif
