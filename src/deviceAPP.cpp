#include "common.h"

// ADC 采集卡应用
void GeekEgret::adc_card_APP()
{
	adccardWindow* adccard = new adccardWindow(GeekEgret::Main);
	adccard->move(0, 20);
	adccard->show();
}