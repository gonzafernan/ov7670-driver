/**
 ******************************************************************************
 * @file           : ov7670_registers.h
 * @author         : Gonzalo Gabriel Fernandez
 * @brief          : OV7670 Registers Map
 ******************************************************************************
 * @note
 *
 * OV7670 Registers defines and macros.
 *
 ******************************************************************************
 */

#ifndef __OV7670_REGISTERS_H
#define __OV7670_REGISTERS_H

#ifdef __cplusplus
extern "C" {
#endif

#define OV7670_I2C_ADDRESS_W 0x42 /*!< I2C slave address for write */
#define OV7670_I2C_ADDRESS_R 0x43 /*!< I2C slave address for read */

#ifdef __cplusplus
}
#endif

#endif /* __OV7670_REGISTERS_H */
