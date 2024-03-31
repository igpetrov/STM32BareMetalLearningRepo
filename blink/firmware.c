#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

#include "../shared/shared_api.h"

static void gpio_setup(void) {
	rcc_periph_clock_enable(RCC_GPIOC);
	gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO13);
}

int main(void) {

    // Testing correct linking
	int i = rrrandom();

	gpio_setup();

	/* Blink the LED (PC13) on the board. */
	while (1) {
		/* Using API function gpio_toggle(): */
		gpio_toggle(GPIOC, GPIO13);	/* LED on/off */
		for (i = 0; i < 1000000; i++) {	/* Wait a bit. */
			__asm__("nop");
		}
	}

	return 0;
}
