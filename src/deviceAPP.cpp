#include "common.h"

// ADC 采集卡应用
void GeekEgret::adc_card_APP()
{
	adccardWindow* adccard = new adccardWindow(GeekEgret::Main);
	adccard->move(0, 20);
	adccard->show();
}

// 吉他英雄应用
void GeekEgret::guitar_hero_APP()
{
	configWindow* Config = new configWindow(GeekEgret::Main);
	Config->move(0, 20);
	Config->show();
}

// 机械臂应用
void GeekEgret::leg_lite_APP()
{
	addWindow* Add = new addWindow(GeekEgret::Main);
	Add->move(0, 20);
	Add->show();
}