#include "mtrain.h"
#include "pin_defs.h"

int main(void)
{
  GPIO_InitTypeDef GPIO_InitStruct2;
  TIM_HandleTypeDef Temp;
  TIM_Base_InitTypeDef htim3;
  TIM_ClockConfigTypeDef sClockSourceConfig;

  htim3.Prescaler = 1600-1;
  htim3.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Period = 10000-1;
  htim3.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;

  Temp.Instance = TIM3;
  Temp.Channel = TIM_CHANNEL_1;
  Temp.Init = htim3;

  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  sClockSourceConfig.ClockPrescaler = TIM_CLOCKPRESCALER_DIV1;
  HAL_TIM_ConfigClockSource(&Temp, &sClockSourceConfig);

  HAL_TIM_PWM_Init(&Temp);

  GPIO_InitStruct2.Pin = GPIO_PIN_6;
  GPIO_InitStruct2.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct2.Pull = GPIO_NOPULL;
  GPIO_InitStruct2.Speed = GPIO_SPEED_FREQ_MEDIUM;
  GPIO_InitStruct2.Alternate = GPIO_AF2_TIM3;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct2);

  //HAL_TIM_Base_Start(&Temp);
  HAL_TIM_PWM_Start(&Temp,TIM_CHANNEL_1);
}
