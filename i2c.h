/*
 * i2c.h
 *
 *  Created on: 20 февр. 2022 г.
 *      Author: Tr
 */

#ifndef I2C_H_
#define I2C_H_

#include <stm32f0xx.h>

#define SET_XSHUT()	(GPIOB->BSRR = GPIO_BSRR_BS_4);
#define CLEAR_XSHUT() (GPIOB->BSRR = GPIO_BSRR_BR_4);

void gpio_i2c_init();
void i2c1_init();
void i2c1_sendByte(uint8_t addr, uint8_t byte);
void i2c1_send_str(uint8_t addr, uint8_t *data, uint8_t size);
void i2c1_get(uint8_t addr, uint8_t *data, uint8_t size);


#endif /* I2C_H_ */
