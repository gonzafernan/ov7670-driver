/**
 ******************************************************************************
 * @file           : ov7670_port_i2c.h
 * @author         : Gonzalo Gabriel Fernandez
 * @brief          : OV7670 Driver I2C port header
 ******************************************************************************
 * @attention
 *
 * OV7670 Driver I2C port header, hardware independant.
 *
 ******************************************************************************
 */

#ifndef __OV7670_PORT_I2C_H
#define __OV7670_PORT_I2C_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "ov7670_def.h"

ov7670_status_t i2c_init(void *hi2c);

ov7670_status_t i2c_reg_read(void *hi2c, uint16_t slave_address, uint8_t reg_address,
                             uint8_t *pdata, uint32_t timeout);
ov7670_status_t i2c_burst_read(void *hi2c, uint16_t slave_address, uint8_t reg_address,
                               uint8_t *pdata, uint16_t data_amont, uint32_t timeout);
ov7670_status_t i2c_reg_write(void *hi2c, uint16_t slave_address, uint8_t reg_address,
                              uint8_t *pdata, uint32_t timeout);
ov7670_status_t i2c_read_dma(void *hi2c, uint16_t slave_address, uint8_t reg_address,
                             uint8_t *pdata, uint16_t data_amount);

#ifdef __cplusplus
}
#endif

#endif /* __OV7670_PORT_I2C_H */
