#include "main.h"
#include "stm32f1xx_hal.h"
#include "keypad16.h"

// Khoi tao Keypad
void keypad_init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  
  /* Cau hinh chan COL1 la dau ra */
  GPIO_InitStruct.Pin = COL1;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(COL1_PORT, &GPIO_InitStruct);

  /* Cau hinh chan COL2 la dau ra */
  GPIO_InitStruct.Pin = COL2;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(COL2_PORT, &GPIO_InitStruct);

  /* Cau hinh chan COL3 la dau ra */
  GPIO_InitStruct.Pin = COL3;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(COL3_PORT, &GPIO_InitStruct);

  /* Cau hinh chan COL4 la dau ra */
  GPIO_InitStruct.Pin = COL4;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(COL4_PORT, &GPIO_InitStruct);
  
  /*Cau hinh chan ROW1 la dau vao */
  GPIO_InitStruct.Pin = ROW1;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(ROW1_PORT, &GPIO_InitStruct);

  /*Cau hinh chan ROW2 la dau vao */
  GPIO_InitStruct.Pin = ROW2;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(ROW2_PORT, &GPIO_InitStruct);
  
  /*Cau hinh chan ROW3 la dau vao */
  GPIO_InitStruct.Pin = ROW3;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(ROW3_PORT, &GPIO_InitStruct);
  
  /*Cau hinh chan ROW4 la dau vao */
  GPIO_InitStruct.Pin = ROW4;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(ROW4_PORT, &GPIO_InitStruct);

  COL1_HIGH;
  COL2_HIGH;
  COL3_HIGH;
  COL4_HIGH;
}  

// Doc gia tri cua Keypad
unsigned char keypad_read(void)
{
    unsigned char keyPressed = 255;
    
    //----- Quet cot 1 -------------------------
    COL1_LOW; COL2_HIGH; COL3_HIGH; COL4_HIGH;
    if(ROW1_RD == 0)
    {
      while(ROW1_RD == 0); // Cho cho nha phim 
      keyPressed = 1;
    }
    else if (ROW2_RD == 0)
    {
      while(ROW2_RD == 0); // Cho cho nha phim 
      keyPressed = 5;
    }
    else if (ROW3_RD == 0)
    {
      while(ROW3_RD == 0); // Cho cho nha phim 
      keyPressed = 9;
    }
    else if (ROW4_RD == 0)
    {
      while(ROW4_RD == 0); // Cho cho nha phim 
      keyPressed = 13;
    }
    
    //----- Quet cot 2 -------------------------
    COL1_HIGH; COL2_LOW; COL3_HIGH; COL4_HIGH;
    if(ROW1_RD == 0)
    {
      while(ROW1_RD == 0); // Cho cho nha phim 
      keyPressed = 2;
    }
    else if (ROW2_RD == 0)
    {
      while(ROW2_RD == 0); // Cho cho nha phim 
      keyPressed = 6;
    }
    else if (ROW3_RD == 0)
    {
      while(ROW3_RD == 0); // Cho cho nha phim 
      keyPressed = 10;
    }
    else if (ROW4_RD == 0)
    {
      while(ROW4_RD == 0); // Cho cho nha phim 
      keyPressed = 14;
    }
    
    //----- Quet cot 3 -------------------------
    COL1_HIGH; COL2_HIGH; COL3_LOW; COL4_HIGH;
    if(ROW1_RD == 0)
    {
      while(ROW1_RD == 0); // Cho cho nha phim 
      keyPressed = 3;
    }
    else if (ROW2_RD == 0)
    {
      while(ROW2_RD == 0); // Cho cho nha phim 
      keyPressed = 7;
    }
    else if (ROW3_RD == 0)
    {
      while(ROW3_RD == 0); // Cho cho nha phim 
      keyPressed = 11;
    }
    else if (ROW4_RD == 0)
    {
      while(ROW4_RD == 0); // Cho cho nha phim 
      keyPressed = 15;
    }
    
    //----- Quet cot 4 -------------------------
    COL1_HIGH; COL2_HIGH; COL3_HIGH; COL4_LOW;
    if(ROW1_RD == 0)
    {
      while(ROW1_RD == 0); // Cho cho nha phim 
      keyPressed = 4;
    }
    else if (ROW2_RD == 0)
    {
      while(ROW2_RD == 0); // Cho cho nha phim 
      keyPressed = 8;
    }
    else if (ROW3_RD == 0)
    {
      while(ROW3_RD == 0); // Cho cho nha phim 
      keyPressed = 12;
    }
    else if (ROW4_RD == 0)
    {
      while(ROW4_RD == 0); // Cho cho nha phim 
      keyPressed = 16;
    }
    
    return keyPressed;
    
}
