/*
 * rcc_driver.h
 *
 *  Created on: Jan 4, 2025
 *      Author: cleve
 */

#ifndef INC_RCC_DRIVER_H_
#define INC_RCC_DRIVER_H_

#include "driver.h"

//This returns the APB1 clock value
uint32_t RCC_GetPCLK1Value(void);

//This returns the APB2 clock value
uint32_t RCC_GetPCLK2Value(void);

uint32_t  RCC_GetPLLOutputClock(void);

#endif /* INC_RCC_DRIVER_H_ */
