#include "mtrain.h"
#include "pin_defs.h"

int main(void)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitTypeDef GPIO_InitStruct2;
  TIM_HandleTypeDef Temp;
  TIM_Base_InitTypeDef htim3;

  htim3.Prescaler = 0;
  htim3.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Period = 100;
  htim3.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.AutoReloadPreload = 0;

  uint32_t leds[4] = {LED1.pin, LED2.pin, LED3.pin, LED4.pin};

  GPIO_InitStruct.Pin = leds[0] | leds[1] | leds[2] | leds[3];
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED1.port, &GPIO_InitStruct);

  GPIO_InitStruct2.Pin = GPIO_PIN_6;
  GPIO_InitStruct2.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct2.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct2.Alternate = GPIO_AF2_TIM3;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct2);

  Temp.Instance = TIM2;
  Temp.Channel = TIM_CHANNEL_1;
  Temp.Init = htim3;

  HAL_TIM_PWM_Init(&Temp);
  HAL_TIM_PWM_Start(&Temp, Temp.Channel);

  int id = 0;
  int forward = 1;
  while (1) {
    HAL_Delay(100);
    HAL_GPIO_WritePin(LED1.port, leds[id], GPIO_PIN_RESET);
    if (id == 2) {
      forward = 0;
    } else if (id == 0) {
      forward = 1;
    }

    if (forward) {
      id++;
    } else {
      id--;
    }

    HAL_GPIO_WritePin(LED1.port, leds[id], GPIO_PIN_SET);
  }
}
