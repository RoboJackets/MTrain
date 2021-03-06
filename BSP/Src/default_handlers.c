void Handler_Loop(void)
{
    while(1) {};
}

void Handler_Nothing(void)
{
}

void NMI_Handler(void)                      __attribute__ ((weak, alias ("Handler_Nothing")));
void HardFault_Handler(void)                __attribute__ ((weak, alias ("Handler_Loop")));
void MemManage_Handler(void)                __attribute__ ((weak, alias ("Handler_Loop")));
void BusFault_Handler(void)                 __attribute__ ((weak, alias ("Handler_Loop")));
void UsageFault_Handler(void)               __attribute__ ((weak, alias ("Handler_Loop")));
void SVC_Handler(void)                      __attribute__ ((weak, alias ("Handler_Nothing")));
void DebugMon_Handler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void PendSV_Handler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void SysTick_Handler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void WWDG_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void PVD_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void TAMP_STAMP_IRQHandler(void)            __attribute__ ((weak, alias ("Handler_Nothing")));
void RTC_WKUP_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void FLASH_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void RCC_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void EXTI0_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void EXTI1_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void EXTI2_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void EXTI3_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void EXTI4_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream0_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream1_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream2_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream3_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream4_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream5_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream6_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void ADC_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN1_TX_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN1_RX0_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN1_RX1_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN1_SCE_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void EXTI9_5_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM1_BRK_TIM9_IRQHandler(void)         __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM1_UP_TIM10_IRQHandler(void)         __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM1_TRG_COM_TIM11_IRQHandler(void)    __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM1_CC_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM2_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM3_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM4_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C1_EV_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C1_ER_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C2_EV_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C2_ER_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void SPI1_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void SPI2_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void USART1_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void USART2_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void USART3_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void EXTI15_10_IRQHandler(void)             __attribute__ ((weak, alias ("Handler_Nothing")));
void RTC_Alarm_IRQHandler(void)             __attribute__ ((weak, alias ("Handler_Nothing")));
void OTG_FS_WKUP_IRQHandler(void)           __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM8_BRK_TIM12_IRQHandler(void)        __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM8_UP_TIM13_IRQHandler(void)         __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM8_TRG_COM_TIM14_IRQHandler(void)    __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM8_CC_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA1_Stream7_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void FMC_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void SDMMC1_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM5_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void SPI3_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void UART4_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void UART5_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM6_DAC_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void TIM7_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream0_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream1_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream2_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream3_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream4_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void ETH_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void ETH_WKUP_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN2_TX_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN2_RX0_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN2_RX1_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN2_SCE_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void OTG_FS_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream5_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream6_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2_Stream7_IRQHandler(void)          __attribute__ ((weak, alias ("Handler_Nothing")));
void USART6_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C3_EV_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C3_ER_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void OTG_HS_EP1_OUT_IRQHandler(void)        __attribute__ ((weak, alias ("Handler_Nothing")));
void OTG_HS_EP1_IN_IRQHandler(void)         __attribute__ ((weak, alias ("Handler_Nothing")));
void OTG_HS_WKUP_IRQHandler(void)           __attribute__ ((weak, alias ("Handler_Nothing")));
void OTG_HS_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void DCMI_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void RNG_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void FPU_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void UART7_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void UART8_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void SPI4_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void SPI5_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void SPI6_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void SAI1_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void LTDC_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void LTDC_ER_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void DMA2D_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));
void SAI2_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void QUADSPI_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void LPTIM1_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void CEC_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C4_EV_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void I2C4_ER_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void SPDIF_RX_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void DSI_IRQHandler(void)                   __attribute__ ((weak, alias ("Handler_Nothing")));
void DFSDM1_FLT0_IRQHandler(void)           __attribute__ ((weak, alias ("Handler_Nothing")));
void DFSDM1_FLT1_IRQHandler(void)           __attribute__ ((weak, alias ("Handler_Nothing")));
void DFSDM1_FLT2_IRQHandler(void)           __attribute__ ((weak, alias ("Handler_Nothing")));
void DFSDM1_FLT3_IRQHandler(void)           __attribute__ ((weak, alias ("Handler_Nothing")));
void SDMMC2_IRQHandler(void)                __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN3_TX_IRQHandler(void)               __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN3_RX0_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN3_RX1_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void CAN3_SCE_IRQHandler(void)              __attribute__ ((weak, alias ("Handler_Nothing")));
void JPEG_IRQHandler(void)                  __attribute__ ((weak, alias ("Handler_Nothing")));
void MDIOS_IRQHandler(void)                 __attribute__ ((weak, alias ("Handler_Nothing")));