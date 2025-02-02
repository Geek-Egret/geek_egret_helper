cmake_minimum_required(VERSION 3.16)

project(GEEK_EGRET_HELPER VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_PLATFORMS "x86_64_windows")
include(./platforms/${CMAKE_PLATFORMS}.cmake)
set(CMAKE_PREFIX_PATH ${QT_ROOT_PATH}"/lib/cmake")

# 添加宏定义
if(CMAKE_PLATFORMS STREQUAL "x86_64_windows")
    add_definitions(-DWINDOWS)
elseif((CMAKE_PLATFORMS STREQUAL "x86_64_linux") OR (CMAKE_PLATFORMS STREQUAL "aarch64_linux"))
    add_definitions(-DLINUX)
endif()

# 复制设置文件到输出目录
file(COPY "config/" DESTINATION ${PROJECT_CONFIG_FOLDER_COPY_PATH})

# 设置自动编译
set(CMAKE_AUTOUIC OFF)  # 手动编译 .ui 文件时关闭
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# UART
aux_source_directory(${PROJECT_ROOT_PATH}/lib/uart/${CMAKE_SYSTEM_NAME} WZ_SERIAL_PORT_SRCS)
include_directories(${PROJECT_ROOT_PATH}/lib/uart/${CMAKE_SYSTEM_NAME})
# JSON
include_directories(${PROJECT_ROOT_PATH}/lib/json)
# 查找QT库
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

# 用户文件
aux_source_directory(${PROJECT_ROOT_PATH}/src SRC_FILES)
set(INC_FILES
    ${PROJECT_ROOT_PATH}/inc/main_window.h
    ${PROJECT_ROOT_PATH}/inc/ui_main_window.h
    ${PROJECT_ROOT_PATH}/inc/config_window.h
    ${PROJECT_ROOT_PATH}/inc/ui_config_window.h
    ${PROJECT_ROOT_PATH}/inc/help_window.h
    ${PROJECT_ROOT_PATH}/inc/ui_help_window.h
    ${PROJECT_ROOT_PATH}/inc/config.h
    ${PROJECT_ROOT_PATH}/inc/ge_json.h
    ${PROJECT_ROOT_PATH}/inc/common.h
)
set(TS_FILES
    ${PROJECT_ROOT_PATH}/res/fonts/GEEK_EGRET_HELPER_zh_CN.ts
)
set(QRC_FILES
    ${PROJECT_ROOT_PATH}/res/ui/ge_helper.qrc
)
set(UI_FILES
    ${PROJECT_ROOT_PATH}/res/ui/main_window.ui
    ${PROJECT_ROOT_PATH}/res/ui/config_window.ui
    ${PROJECT_ROOT_PATH}/res/ui/help_window.ui
)


# 添加头文件路径
include_directories(${PROJECT_ROOT_PATH}/inc)

# 文件汇总
set(PROJECT_SOURCES
        ${SRC_FILES}
        ${INC_FILES}
        ${TS_FILES}
        ${QRC_FILES}
        ${UI_FILES}
        ./res/logo.rc
)
# 添加文件
qt_add_executable(${PROJECT_NAME}
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)
# 添加翻译文件
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

# 安装包构建
if(SETUP_PACK_FLAG)
    # 查找Qt依赖并复制
    # 工作于可执行文件目录
    if(CMAKE_PLATFORMS STREQUAL "x86_64_windows")
       add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                           COMMAND ${QT_ROOT_PATH}/bin/windeployqt.exe
                           --dir
                           ${PROJECT_ROOT_PATH}/lib/qt
                           ./${PROJECT_NAME}.exe
                           COMMENT "Deploying Qt libraries..."
       )
    elseif((CMAKE_PLATFORMS STREQUAL "x86_64_linux") OR (CMAKE_PLATFORMS STREQUAL "aarch64_linux"))
       add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                           COMMAND ${QT_ROOT_PATH}/bin/windeployqt
                           --dir
                           ${PROJECT_ROOT_PATH}/lib/qt
                           ${PROJECT_NAME}
                           COMMENT "Deploying Qt libraries..."
       )   
    endif()
# 安装文件
# 工作于CMakeLists.txt目录
install(TARGETS  ${PROJECT_NAME} 
        LIBRARY DESTINATION lib     # 指定静态库（.a 或 .lib 文件）的安装路径
        RUNTIME DESTINATION bin     # 指定可执行文件（.exe 或 .dll 文件）的安装路径
        PUBLIC_HEADER DESTINATION include  # 指定公共头文件的安装路径 
)           
install(DIRECTORY config/ DESTINATION config )   # 指定用户配置文件安装路径
install(DIRECTORY lib/qt/ DESTINATION bin )      # 指定Qt依赖文件安装路径
include (InstallRequiredSystemLibraries)    # 自动包含目标系统所需的运行时库
# set (CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "1.0")    # 设置打包的版本号
set(CPACK_SOURCE_GENERATOR "TGZ")
include (CPack)
# 打包
# 工作于可执行文件目录
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND cpack
)
endif()

