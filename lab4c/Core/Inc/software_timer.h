/*
 * software_timer.h
 *
 *  Created on: Nov 13, 2023
 *      Author: haoha
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"


extern int timer1_flag;


void setTimer1(int duration);

void timer_run();


#endif /* INC_SOFTWARE_TIMER_H_ */
