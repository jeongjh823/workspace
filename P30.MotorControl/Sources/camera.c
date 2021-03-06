/*
 * camera.c
 *
 *  Created on: Feb 23, 2015
 *      Author: 연세대학교 기계공학과 정재학
 */

//필요한것
//clk generation
//signal generation
//read buffers

#include "camera.h"
//#include "freerunusonic.h" // maybe CLK
#include "freerunadc.h"
#include "ngv_dmu.h"
#include "gpio.h"

vuint16_t CAM_channel=1;//FUSS_CH_ALL;

vuint16_t CAM_signal;
vuint16_t CAM_a, CAM_b;

void CAM_Init(uint16_t channels)
{
	CAM_channel = channels;
}

void CAM_Clock_ISR()
{
	//void FUSS_PIT3_ISR(void){
	vuint32_t t0;
		
	//if (fuss_en_channel & FUSS_CH0)
	GPIO_Set(GPIO_PG10, 1);
	
	#if NGV_DMU_SYSCLK == SYSCLK_IRC_16MHZ
		while ((t0-PIT.CH[3].CVAL.R)<(16*11)) {}
	#elif NGV_DMU_SYSCLK == SYSCLK_PLL_32MHZ
		while ((t0-PIT.CH[3].CVAL.R)<(32*11)) {}
	#elif NGV_DMU_SYSCLK == SYSCLK_PLL_64MHZ
		while ((t0-PIT.CH[3].CVAL.R)<(64*11)) {}
	#endif
		
	GPIO_Set(GPIO_PG10, 0);
	
	PIT.CH[3].TFLG.R = 0x00000001;//?s
}

void CAM_Signal_ISR()
{
	if (CAM_channel & CAM_CH0)
		GPIO_Set(GPIO_PG10, 1);
	if (CAM_channel & CAM_CH1)
			GPIO_Set(GPIO_PG11, 1);
	
}

void CAM_Get()
{
	for(int i=0; i<128; i++)
	{
		CAM_READ[i] = FADC_Get(CAM_channel);
	}
}
