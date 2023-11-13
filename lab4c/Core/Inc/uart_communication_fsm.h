/*
 * uart_communication_fsm.h
 *
 *  Created on: Nov 13, 2023
 *      Author: haoha
 */

#ifndef INC_UART_COMMUNICATION_FSM_H_
#define INC_UART_COMMUNICATION_FSM_H_

#include "global.h"
#include "command_parser_fsm.h"


void uart_communication_fsm();
int is_RST();
int is_OK();
//X
#endif /* INC_UART_COMMUNICATION_FSM_H_ */
