#include "stm32f407xx.h"

int main() {
	//**LED PD12 initilisation**
	RCC->AHB1ENR |= (1 << 3);
	GPIOD->MODER &= ~(3 << (12*2));
	GPIOD->MODER |= (1 << (12*2));
	GPIOD->OTYPER &= ~(1 << 12);
	GPIOD->OSPEEDR |= (3 << (12*2));
	GPIOD->PUPDR &= ~(3 << (12*2));
	//**Button PA0 initilisation**
	RCC->AHB1ENR |= (1 << 0);
	GPIOA->MODER &= ~(1 << (0*2));
	GPIOA->PUPDR &= ~(3 << (0*2));
	GPIOA->PUPDR |= (2 << (0*2));
	
	while(1) {
		if (GPIOA->IDR & (1 << 0))
			GPIOD->ODR |= (1 << 12);
		else 
			GPIOD->ODR &= ~(1 << 12);
	}
	
}
