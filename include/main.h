#ifndef __MAIN_H__
#define __MAIN_H__

/* Assuming a clock rate of 16Mhz and a CLK/64 prescaler,
 * we will see 250 ticks per millisecond. If we want to
 * have the timer overlow every millisecond, we need to
 * initialize the counter to 5 after each tick. */
#define TIMER_RESET_VAL 5

void configure(void);
void task(void);
int main(void);

#endif /* __MAIN_H__ */
