#include "esp_err.h"
#include "esp_log.h"
#include "esp_check.h"
#include "driver/i2c.h"
#include "driver/gpio.h"
#include "rtc_timer.h"
#include "esp_sleep.h"
#include "driver/rtc_io.h"

#define TAG "RTC_TIMER"

// Forward declaration
void go_low_power_mode();

void start_rtc_timer(int seconds) {
    ESP_LOGI(TAG, "Setting up RTC wakeup in %d seconds...", seconds);

    esp_sleep_enable_timer_wakeup((uint64_t)seconds * 1000000ULL);
    go_low_power_mode();  // Custom function to prepare for sleep
    esp_deep_sleep_start();  // Will restart on wake
}

void go_low_power_mode() {
    // Turn off display backlight
    // Replace with your actual backlight pin
    gpio_set_direction(GPIO_NUM_15, GPIO_MODE_OUTPUT);
    gpio_set_level(GPIO_NUM_15, 0); // backlight off

    // Additional shutdown logic can go here
    ESP_LOGI(TAG, "Entering low power mode...");
}

