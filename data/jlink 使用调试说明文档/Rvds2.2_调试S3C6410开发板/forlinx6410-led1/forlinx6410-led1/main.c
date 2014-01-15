/**************************************************************************************
* 
*	Project Name : OK6410 Test
*
*	Copyright 2006 by Forlinx, Inc.
*	All rights reserved.
*
*	Project Description :
*		This software is only for validating functions of the S3C6410.
*		Anybody can use this software without our permission.
*  
*--------------------------------------------------------------------------------------
* 
*	File Name : main.c
*  
*	File Description : This file implements the test main functon.
*
*	Author : FatFish
*	Dept. : Forlinx Development Team
*	Created Date : 2011/2/13
*	Version : 1.0
* 
*	History
*	- Created for Forlinx6410 Led (FatFish 2011/2/13)
*  
**************************************************************************************/


#define rGPMCON          (*(volatile unsigned *)(0x7F008820))
#define rGPMDAT          (*(volatile unsigned *)(0x7F008824))
#define rGPMPUD          (*(volatile unsigned *)(0x7F008828))


void msDelay(int time)
{
    	volatile unsigned int i,j;
    	for(i = 0; i < 2000000; i++)
    		for(j=0; j<time; j++);
}


void GPIO_Init(void)
{
	rGPMCON  = 0x11111;
    rGPMPUD  = 0x00;
    rGPMDAT  = 0X1F;
}

void LedTest(void)
{
	volatile unsigned int i;
	while (1)
	{
		for(i=0; i<4; i++)
		{
			rGPMDAT  = ~(1<<i);
			msDelay(10);
		}

	}
}
void Main(void)
{
	GPIO_Init();
	LedTest();
}
