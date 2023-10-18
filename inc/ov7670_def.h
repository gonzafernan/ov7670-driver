/**
 ******************************************************************************
 * @file           : ov7670_def.h
 * @author         : Gonzalo Gabriel Fernandez
 * @brief          : OV7670 types definition
 ******************************************************************************
 * @attention
 *
 * OV7670 types and structures definition.
 *
 ******************************************************************************
 */

#ifndef __OV7670_DEF_H
#define __OV7670_DEF_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/**
 * @brief OV7670 status structure definition
 */
typedef enum {
    OV7670_OK = 0x00U,
    OV7670_ERROR = 0x01U

} ov7670_status_t;

/**
 * @brief OV7670 handle structure definition
 */
typedef struct {
    void *i2c_handle;     /*!< I2C handle */
    uint32_t i2c_timeout; /*!< I2C timeout */

} ov7670_t;

#ifdef __cplusplus
}
#endif

#endif /* __OV7670_DEF_H */
