#include "system.h"

#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/rcc.h>


// BlackPill blue led is connected to PC13
// Ref: pinout image in docs
#define LED_PORT (GPIOC)
#define LED_PIN  (GPIO13)


static void gpio_setup(void) {
	rcc_periph_clock_enable(RCC_GPIOC); // wire clock with port C
	gpio_mode_setup(LED_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, LED_PIN);
}

int main(void) {

	system_setup();
	gpio_setup();

	uint64_t start_time = system_get_ticks();


	/* Blink the LED (PC13) on the board. */
	while (1) {
		if (system_get_ticks() - start_time >= 1000) {
			/* Using API function gpio_toggle(): */
			gpio_toggle(LED_PORT, LED_PIN);	/* LED on/off */
			start_time = system_get_ticks();
		}
	}

	return 0;
}
