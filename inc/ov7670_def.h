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

/**
 * @brief OV7670 status structure definition
 */
typedef enum {
    OV7670_OK = 0x00U,
    OV7670_ERROR = 0x01U

} ov7670_status_t;

#ifdef __cplusplus
}
#endif

#endif /* __OV7670_DEF_H */
