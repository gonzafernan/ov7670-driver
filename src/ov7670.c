/**
 ******************************************************************************
 * @file           : ov7670.c
 * @author         : Gonzalo Gabriel Fernandez
 * @brief          : OV7670 Driver
 ******************************************************************************
 * @attention
 *
 * OV7670 C Driver private and public functions and variables.
 *
 ******************************************************************************
 */

#include "ov7670.h"
#include "ov7670_registers.h"

/**
 * @brief   Read OV7670 register
 * @param   hov: Pointer to OV7670 handle
 * @param   reg_address: Address of register to read
 * @param   pdata: Pointer to buffer where value will be stored
 * @retval  ov7670_status_t
 */
static ov7670_status_t ov7670_reg_read(ov7670_t *hov, uint8_t reg_address, uint8_t *pdata) {
    /* MPU6050 register read wrapper */
    return i2c_reg_read(hov->i2c_handle, (uint16_t)OV7670_I2C_ADDRESS_R << 1, reg_address, pdata);
}

/**
 * @brief   Burst read OV7670 registers
 * @param   hov: Pointer to OV7670 handle
 * @param   reg_address: Address of first register to read
 * @param   pdata: Pointer to buffer where data will be stored
 * @param   data_amount: Amount of data to read
 * @retval  ov7670_status_t
 */
static ov7670_status_t ov7670_burst_read(ov7670_t *hov, uint8_t reg_address, uint8_t *pdata,
                                         uint16_t data_amount) {
    /* MPU6050 register read wrapper */
    return i2c_burst_read(hov->i2c_handle, (uint16_t)OV7670_I2C_ADDRESS_R << 1, reg_address, pdata,
                          data_amount);
}

/**
 * @brief   Write OV7670 register
 * @param   hov: Pointer to OV7670 handle
 * @param   reg_address: Address of register to write
 * @param   pdata: Pointer to buffer with value to write
 * @retval  ov7670_status_t
 */
static ov7670_status_t ov7670_reg_write(ov7670_t *hov, uint8_t reg_address, uint8_t *pdata) {
    /* OV7670 register write wrapper */
    return i2c_reg_write(hov->i2c_handle, (uint16_t)OV7670_I2C_ADDRESS_W << 1, reg_address, pdata);
}
