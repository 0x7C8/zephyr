#include <zephyr/kernel.h>
#include <zephyr/sys/util.h>

#define GPIO_BASE 0x03000000
#define GPIO_OUT  (*(volatile uint32_t *)GPIO_BASE)

int main(void)
{
	uint16_t pattern = 0x0001;

	/* All LEDs on — immediate visual proof */
	GPIO_OUT = 0xFFFF;
	k_msleep(500);

	/* Walking LED pattern */
	while (1) {
		GPIO_OUT = pattern;
		k_msleep(100);
		pattern = (pattern << 1) | (pattern >> 15);
	}

	return 0;
}
