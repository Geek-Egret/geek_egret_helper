#include "common.h"

// 窗口风格
QString windowBackGroundColor;
QString windowBorderRadius;
QString windowBorderColor;
QString mainWindowStyle;
QString childWindowStyle;
// 按键颜色动作
QString buttonHoverBackgroundColor;
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
	{"adc_card",":/device/device_img/adc_card.png",GeekEgret::adc_card_APP},
	{"guitar_hero",":/device/device_img/leg_lite.png",GeekEgret::guitar_hero_APP},
	{"leg_lite",":/device/device_img/leg_lite.png",GeekEgret::leg_lite_APP},
	{"smart_vision",":/device/device_img/smart_vision.png",GeekEgret::leg_lite_APP},
};

//  所有设备数量
int allDeviceNum = sizeof(deviceLists) / sizeof(deviceLists[0]);

// 设置设置变量
void GeekEgret::configSet()
{
	mainWindowStyle = 
		"QMainWindow{"
		"background-color:" + windowBackGroundColor + ";"   // 背景颜色
		"border-radius:" + windowBorderRadius + ";"  // 圆角直径
		"border-style:solid;"   // 边框线条风格
		"border-width:1px;"     // 边框线条宽度
		"border-color:" + windowBorderColor + ";"   // 边框颜色
		"}";
	childWindowStyle =
		"QWidget{"
		"background-color:" + windowBackGroundColor + ";"   // 背景颜色
		"border-radius:" + windowBorderRadius + ";"  // 圆角直径
		"border-style:solid;"   // 边框线条风格
		"border-width:0px;"     // 边框线条宽度
		"}";
	/* 按键颜色动作 */
	buttonColorAction = 
		"QPushButton{background:" + windowBackGroundColor + ";}"	// 按键正常背景颜色
		"QPushButton:hover{background-color:" + buttonHoverBackgroundColor +
		";}";	// 鼠标划过背景颜色
}



