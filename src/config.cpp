#include "common.h"

// 窗口风格
QString mainWindowStyle;
QString childWindowStyle;
// 按键颜色动作
QString buttonColorAction;
// 设备按键动作
QString deviceButtonAction;
// 欢迎窗口显示时间
int greetWindowShowTime;
// 问候语刷新时间
int greetingReflashTime;
//  已添加设备
std::vector<std::string> addedDeviceLists;

// Emoji Unicode码区间
char32_t  emojiUnicodeRange[3][2] = {	
	{0x1F400, 0x1F43D},
	{0x1F600, 0x1F64A},
	{0x1F910, 0x1F92F} 
};

// 设备列表
deviceList deviceLists[] = {
	{"adc_card",":/device/adc_card.png",GeekEgret::adc_card_APP},
	{"adc_card",":/device/adc_card.png",GeekEgret::adc_card_APP},
	{"adc_card",":/device/adc_card.png",GeekEgret::adc_card_APP},
	{"adc_card",":/device/adc_card.png",GeekEgret::adc_card_APP},
	{"adc_card",":/device/adc_card.png",GeekEgret::adc_card_APP},
};

//  所有设备数量
int allDeviceNum = sizeof(deviceLists) / sizeof(deviceLists[0]);



