#ifndef COMMON_H
#define COMMON_H

// C++标准库
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include <vector>
#include <fstream>

// QT
#include <QDir>
#include <QFileDialog>
#include <QProcess>
#include <QDesktopServices>
#include <QUrl>

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
#include "ge_json.h"
#include "config.h"

#endif