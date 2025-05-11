#ifndef RTC_TIMER_H
#define RTC_TIMER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

// Public function declarations
void start_rtc_timer(int seconds);
void go_low_power_mode(void);

#ifdef __cplusplus
}
#endif

#endif // RTC_TIMER_H
