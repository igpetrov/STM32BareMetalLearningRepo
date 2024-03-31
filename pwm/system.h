#ifndef INC_SYSTEM_H
#define INC_SYSTEM_H

#include <stdint.h>
#include <stdbool.h>

#define CPU_FREQ     (84000000) // 84MHz
#define SYSTICK_FREQ (1000)

void system_setup(void);
uint64_t system_get_ticks(void);

#endif // INC_SYSTEM_H