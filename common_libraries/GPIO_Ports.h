#ifndef GPIO_PORTS_H
#define GPIO_PORTS_H
#include "main.h"

#define GPIO_DIRECTION_INPUT 1
#define GPIO_DIRECTION_OUTPUT 0

// Port A
int8_t PortA_On (uint32_t pin);

int8_t PortA_Off (uint32_t pin);

int8_t PortA_Toggle (uint32_t pin);

// port B
int8_t PortB_On (uint32_t pin);

int8_t PortB_Off (uint32_t pin);

int8_t PortB_Toggle (uint32_t pin);

// port C
int8_t PortC_On (uint32_t pin);

int8_t PortC_Off (uint32_t pin);

int8_t PortC_Toggle (uint32_t pin);

#if defined(STM32F407xx) || defined(__STM32F1xx_HAL_CAN_H)
// port D
int8_t PortD_On (uint32_t pin);

int8_t PortD_Off (uint32_t pin);

int8_t PortD_Toggle (uint32_t pin);
#endif

#ifdef STM32F407xx
int8_t PortG_On (uint32_t pin);

int8_t PortG_Off (uint32_t pin);

int8_t PortG_Toggle (uint32_t pin);

#endif // STM32F4xx_HAL_CAN_H


// read pins

int8_t ReadPortA(uint16_t pin);

int8_t ReadPortB(uint16_t pin);

int8_t ReadPortC(uint16_t pin);
#ifdef __STM32F1xx_HAL_CAN_H
int8_t ReadPortD(uint16_t pin);
#endif

#endif // GPIO_PORTS_H

