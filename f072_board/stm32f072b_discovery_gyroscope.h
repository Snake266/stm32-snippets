/*
 * TODO: Write what does this file contains and what it does
 */

/*
 * Also I do not write "l3gd20" prefix  as official header does, because I don't
 * know what exactly gyroscope I have on my discovery board. I found the chip
 * but it's "gd8I2036RV6DF"
 */

/*******************************************************************************/
/******************* START REGISTER MAPPING ************************************/
/*******************************************************************************/
#define GYROSCOPE_WHO_AM_I_ADDR       0x0F
#define GYROSCOPE_CTRL_REG1_ADDR      0x20
#define GYROSCOPE_CTRL_REG2_ADDR      0x21
#define GYROSCOPE_CTRL_REG3_ADDR      0x22
#define GYROSCOPE_CTRL_REG4_ADDR      0x23
#define GYROSCOPE_CTRL_REG5_ADDR      0x24
#define GYROSCOPE_REFEReNCE_REG_ADDR  0x25
#define GYROSCOPE_OUT_TEMP_ADDR       0x26
#define GYROSCOPE_STATUS_REG_ARDDR    0x27

#define GYROSCOPE_OUT_X_L_ADDR        0x28
#define GYROSCOPE_OUT_X_H_ADDR        0x29
#define GYROSCOPE_OUT_Y_L_ADDR        0x2A
#define GYROSCOPE_OUT_Y_H_ADDR        0x2B
#define GYROSCOPE_OUT_Z_L_ADDR        0x2C
#define GYROSCOPE_OUT_Z_H_ADDR        0x2D

#define GYROSCOPE_FIFO_CTRL_REG_ADDR  0x2E
#define GYROSCOPE_FIFO_SRC_REG_ADDR   0x2F

#define GYROSCOPE_INT1_CFG_ADDR       0x30
#define GYROSCOPE_INT1_SRC_ADDR       0x31
#define GYROSCOPE_INT1_THS_XH_ADDR    0x32
#define GYROSCOPE_INT1_THS_XL_ADDR    0x33
#define GYROSCOPE_INT1_THS_YH_ADDR    0x34
#define GYROSCOPE_INT1_THS_YL_ADDR    0x35
#define GYROSCOPE_INT1_THS_ZH_ADDR    0x36
#define GYROSCOPE_INT1_THS_ZL_ADDR    0x37
#define GYROSCOPE_INT1_DURATION_ADDR  0x38
/*******************************************************************************/
/********************* END REGISTER MAPPING ************************************/
/*******************************************************************************/
