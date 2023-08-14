/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: ProBook G7
 */
#include "../HAL/7segment/7_segment_init.h"
#include "../MCAL/DIO/DIO.h"


void main() {


	HSSD_voidInit(0);
		HSSD_voidInit(1);
		u8 LA_itiration=1;

		while(1){
			HSSD_voidCountUp(0,zero);
			HSSD_voidDisplayNumber(1,LA_itiration);
			LA_itiration++;
			if (LA_itiration==10) 	LA_itiration=0;
		}

}

