#include "analog_in.h"


ADC_HandleTypeDef ADC_InitStruct;

__IO int32_t readValue = 0;
__IO uint16_t unsignedReadValue = 0;
const int REFRESH_PERIOD = 10;
//used for sprintf later
char desc[50];

void ADC_Config(adc_pin_name pin) {
  ADC_InitStruct.Instance                   = pin.port;
   ADC_InitStruct.Init.ClockPrescaler        = ADC_CLOCK_SYNC_PCLK_DIV2;
   ADC_InitStruct.Init.Resolution            = ADC_RESOLUTION_12B;
   ADC_InitStruct.Init.ScanConvMode          = DISABLE; /* Sequencer disabled (ADC conversion on only 1 channel: channel set on rank 1) */
   ADC_InitStruct.Init.ContinuousConvMode    = ENABLE; /* Continuous mode enabled to have continuous conversion */
   ADC_InitStruct.Init.DiscontinuousConvMode = DISABLE; /* Parameter discarded because sequencer is disabled */
   ADC_InitStruct.Init.NbrOfDiscConversion   = 0;
   ADC_InitStruct.Init.ExternalTrigConvEdge  = ADC_EXTERNALTRIGCONVEDGE_NONE; /* Conversion start not triggered by external event */
   ADC_InitStruct.Init.ExternalTrigConv      = ADC_EXTERNALTRIGCONV_T1_CC1;
   ADC_InitStruct.Init.DataAlign             = ADC_DATAALIGN_RIGHT;
   ADC_InitStruct.Init.NbrOfConversion       = 1;
   ADC_InitStruct.Init.DMAContinuousRequests = ENABLE;
   ADC_InitStruct.Init.EOCSelection          = DISABLE;
   //initializes the ADC given the structure that defines it
   HAL_ADC_Init(&ADC_InitStruct);

   ADC_ChannelConfTypeDef sConfig;
   sConfig.Channel       = ADC_CHANNEL_0;
   sConfig.Rank          = 1;
   sConfig.SamplingTime  =  ADC_SAMPLETIME_56CYCLES;
   sConfig.Offset        = 0;
   //configures the channel for the ADC, given the input structure
   HAL_ADC_ConfigChannel(&ADC_InitStruct, &sConfig);
}


//reads in a float
//currently prints the value
void read(adc_pin_name pin) {
  ADC_Config(pin);
  readValue = ((float)HAL_ADC_GetValue(&ADC_InitStruct)) / (1 << 12);

}

//read in unsigned 16 bit Value
//currently just prints the value
void read_u16(adc_pin_name pin) {
   ADC_Config(pin);
   //TODO

}

//configures the ADC and the channel