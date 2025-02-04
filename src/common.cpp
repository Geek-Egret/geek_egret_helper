#include "common.h"

// 主窗口
mainWindow* GeekEgret::Main = nullptr;

// Emoji Unicode随机生成器
char32_t GeekEgret::randomEmojiUnicode(char32_t min, char32_t max) 
{
    // 初始化随机数生成器
    static std::random_device rd;
    static std::mt19937 gen(rd());

    // 定义 Unicode 有效范围（排除代理对和保留区域）
    std::uniform_int_distribution<uint32_t> dist(min, max);

    // 生成随机码点
    uint32_t code_point = dist(gen);

    // 过滤代理对 (0xD800-0xDFFF)
    if (code_point >= 0xD800 && code_point <= 0xDFFF) {
        code_point = 0xE000; // 若生成代理对，替换为安全值
    }

    return static_cast<char32_t>(code_point);
}

// int随机生成器
int GeekEgret::randomInt(int min, int max)
{
    // 初始化随机数生成器
    static std::random_device rd;
    static std::mt19937 gen(rd());

    // 定义 Unicode 有效范围（排除代理对和保留区域）
    std::uniform_int_distribution<int> dist(min, max);

    // 生成随机码点
    int code_point = dist(gen);

    return static_cast<int>(code_point);
}