// Dumb hack, remove when fixed sys_clock_elapsed call

#include <zephyr/kernel.h>
#include <zephyr/sys_clock.h>

int sys_clock_elapsed(void)
{
    return 0;
}