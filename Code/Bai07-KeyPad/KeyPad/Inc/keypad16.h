#ifndef __KEYPAD16_H
#define __KEYPAD16_H

#include "main.h"
#include "stm32f1xx_hal.h"

// Dinh danh phan cung
#define ROW1  GPIO_PIN_0
#define ROW2  GPIO_PIN_1
#define ROW3  GPIO_PIN_2
#define ROW4  GPIO_PIN_3

#define COL1  GPIO_PIN_5
#define COL2  GPIO_PIN_5
#define COL3  GPIO_PIN_6
#define COL4  GPIO_PIN_7

#define ROW1_PORT   GPIOB
#define ROW2_PORT   GPIOB
#define ROW3_PORT   GPIOB
#define ROW4_PORT   GPIOB

#define COL1_PORT   GPIOB
#define COL2_PORT   GPIOB
#define COL3_PORT   GPIOB
#define COL4_PORT   GPIOB

// Dinh nghia qua trinh xuat du lieu
//--- Xuat muc cao ---//
#define COL1_HIGH			HAL_GPIO_WritePin(COL1_PORT, COL1, GPIO_PIN_SET)
#define COL2_HIGH			HAL_GPIO_WritePin(COL2_PORT, COL2, GPIO_PIN_SET)
#define COL3_HIGH			HAL_GPIO_WritePin(COL3_PORT, COL3, GPIO_PIN_SET)
#define COL4_HIGH			HAL_GPIO_WritePin(COL4_PORT, COL4, GPIO_PIN_SET)

//--- Xuat muc thap ---//
#define COL1_LOW			HAL_GPIO_WritePin(COL1_PORT, COL1, GPIO_PIN_RESET)
#define COL2_LOW			HAL_GPIO_WritePin(COL2_PORT, COL2, GPIO_PIN_RESET)
#define COL3_LOW			HAL_GPIO_WritePin(COL3_PORT, COL3, GPIO_PIN_RESET)
#define COL4_LOW			HAL_GPIO_WritePin(COL4_PORT, COL4, GPIO_PIN_RESET)

// Dinh nghia qua trinh nhan du lieu
#define ROW1_RD       HAL_GPIO_ReadPin(ROW1_PORT, ROW1)
#define ROW2_RD       HAL_GPIO_ReadPin(ROW2_PORT, ROW2)
#define ROW3_RD       HAL_GPIO_ReadPin(ROW3_PORT, ROW3)
#define ROW4_RD       HAL_GPIO_ReadPin(ROW4_PORT, ROW4)

// Khai bao ham nguyen mau
void keypad_init(void);           //--> Khoi tao Keypad
unsigned char keypad_read(void);  //--> Doc gia tri cua Keypad

#endif
