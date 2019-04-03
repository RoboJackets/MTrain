#include "mtrain.h"
#include "pin_defs.h"

int main(void)
{
  GPIO_InitTypeDef GPIO_InitStruct2 = {};
  TIM_OC_InitTypeDef sConfigOC = {};
  TIM_HandleTypeDef Temp = {};

  Temp.Instance = TIM3;
  Temp.Channel = TIM_CHANNEL_1;
  Temp.Init.Prescaler = 16000;
  Temp.Init.CounterMode = TIM_COUNTERMODE_UP;
  Temp.Init.Period = 1300;
  Temp.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  Temp.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;

  HAL_TIM_PWM_Init(&Temp);

  GPIO_InitStruct2.Pin = GPIO_PIN_6;
  GPIO_InitStruct2.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct2.Pull = GPIO_NOPULL;
  GPIO_InitStruct2.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct2.Alternate = GPIO_AF2_TIM3;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct2);

  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.OCIdleState = TIM_OCIDLESTATE_SET;
  sConfigOC.Pulse = 650;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_ENABLE;

  HAL_TIM_PWM_ConfigChannel(&Temp, &sConfigOC, TIM_CHANNEL_1);

  HAL_TIM_PWM_Start(&Temp,TIM_CHANNEL_1);

  while(1) {
  }
}
