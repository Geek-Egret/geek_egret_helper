cmake_minimum_required(VERSION 3.16)

project(GEEK_EGRET_HELPER VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_PLATFORMS "x86_64_win")
include(./platforms/${CMAKE_PLATFORMS}.cmake)

set(CMAKE_AUTOUIC OFF)  # 手动编译 .ui 文件时关闭
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# UART
aux_source_directory(./lib/WzSerialPort/${CMAKE_SYSTEM_NAME} WZ_SERIAL_PORT_SRCS)
include_directories(./lib/WzSerialPort/${CMAKE_SYSTEM_NAME})
# JSON
include_directories(./lib/json)
# 查找QT库
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

# 用户文件
aux_source_directory(./src SRC_FILES)
set(INC_FILES ./inc/ge_window.h ./inc/ui_ge_window.h)
set(TS_FILES ./res/fonts/GEEK_EGRET_HELPER_zh_CN.ts)

# 添加头文件路径
include_directories(./inc)

# 文件汇总
set(PROJECT_SOURCES
        ${SRC_FILES}
        ${INC_FILES}
        ${TS_FILES}
)

qt_add_executable(${PROJECT_NAME}
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.GEEK_EGRET_HELPER)
endif()
set_target_properties(${PROJECT_NAME} PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(${PROJECT_NAME})
endif()
