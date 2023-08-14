# AVR 7-Segment Display Driver

The AVR 7-Segment Display Driver is a versatile library developed for Atmel AVR microcontrollers to simplify the control of 7-segment displays. Whether you're working on a digital clock, a measurement instrument, or any project involving numeric display, this driver provides an efficient solution for managing 7-segment displays with ease.

# Features
Flexible Display Control: Effortlessly manage single or multiple 7-segment displays with a wide range of digits and segments.
Intuitive API: The library offers an easy-to-use API for displaying numbers, characters, and custom patterns on 7-segment displays.
Efficient Multiplexing: Efficiently multiplex multiple displays, optimizing display refresh while minimizing resource consumption.
Example Implementation: Included example code demonstrates how to initialize the driver and utilize its features for dynamic display applications.
Compatibility: Designed to seamlessly integrate with popular AVR microcontrollers, making it suitable for various AVR-based projects.
Getting Started
Begin using the AVR 7-Segment Display Driver by cloning this repository and exploring the example code provided. The examples showcase how to set up the driver, display different numbers and characters, and manage multiple displays efficiently.


/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Sama Hussien
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


# Contributions
Contributions to the AVR 7-Segment Display Driver are encouraged! If you encounter issues, have ideas for enhancements, or wish to add new features, feel free to open an issue or submit a pull request.

# License
This project is licensed under the MIT License, permitting you to freely use, modify, and distribute the driver.
