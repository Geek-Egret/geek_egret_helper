<i>GEEK EGRET助手
=====
### 介绍
----
### 工程结构
```shell
├─build                     CMAKE\MAKE输出
├─inc                       头文件
├─install                   MAKE安装文件夹
├─lib                       库文件夹
│  ├─json                   JSON库
│  └─uart                   UART库
│      ├─linux
│      └─windows
├─out                       MSVC输出
├─res                       QT资源
│  ├─ui                     QT GUI界面文件
│  └─fonts                  QT界面翻译文件
├─platforms                 CMAKE配置文件
└─src                       源文件
```
----
### Windows编译环境搭建

[Visual Code](https://visualstudio.microsoft.com/zh-hans/vs/)
- Windows C/C++ 集成开发环境

[MinGw](https://github.com/skeeto/w64devkit/releases/tag/v2.0.0)
- GNU C/C++编译器

[CMake](https://github.com/Kitware/CMake/releases/download/v3.31.4/cmake-3.31.4-windows-x86_64.msi)
- 跨平台工程构建工具

[DirectX12](https://developer.microsoft.com/zh-cn/windows/downloads/windows-sdk/)
- Windows SDK自带，因此下载Windows SDK即可
- 该库为QT库的底层

[Qt](https://mirrors.tuna.tsinghua.edu.cn/qt/official_releases/online_installers/)
- 终端执行`.\[文件名] --mirror https://mirrors.ustc.edu.cn/qtproject`
- 打开环境变量，添加QT MSVC路径至`path`中

----
### Linux编译环境搭建
#### GCC
| Linux发行版 | 命令 |
| --- | --- |
| Debain系 | ` apt install gcc g++ ` |
| RedHat系 | ` yum -y install gcc gcc-c++ ` |
| Arch系 | ` pacman -S gcc ` |
#### CMAKE
| Linux发行版 | 命令 |
| --- | --- |
| Debain系 | ` apt install cmake ` |
| RedHat系 | ` yum -y install cmake ` |
| Arch系 | ` pacman -S cmake ` |
#### MAKE
| Linux发行版 | 命令 |
| --- | --- |
| Debain系 | ` apt install make ` |
| RedHat系 | ` yum -y install make ` |
| Arch系 | ` pacman -S make ` |
----
## 编译
### Windows编译流程
- 进入工程 `res/ui`
- 编译 .ui：文件终端执行
    - `uic ge_window.ui -o ../../src/ui_ge_window.cpp`
    - `uic ge_window.ui -o ../../inc/ui_ge_window.h`
- 进入工程 `platforms` 选择编译平台文件，根据编译环境修改配置内容
- 使用 Visual Studio/Visual Studio Code/Qt Creator 打开工程
- 生成/运行
### Linux编译流程
- 在build目录下打开终端
- 键入` cmake -DCMAKE_OS=编译目标系统 -DROOT_DIR_PATH=软件工程根路径 -G "Unix Makefiles" .. `

| 编译目标系统 | 说明 |
| --- | --- |
| x86_64_win | x86_64架构的Windows系统 |
| x86_64_linux | x86_64架构的Linux系统 |
| aarch64_linux | aarch64架构的Linux系统 |

- 键入` make `,可加` -j `进行多线程编译，加快编译速度
### 常见问题
- 由于有中文注释导致有些变量未定义：修改Visual Code的中文编码方式
### 软件使用教程
### 版本说明
| 版本号 | 说明 |
| ----- | ---- |
| V0.1 | 完成Windows平台工程搭建 |