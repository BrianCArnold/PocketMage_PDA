#pragma once

// external library dependencies
#include <Arduino.h>
#include <GxEPD2_BW.h>
#include <U8g2lib.h>
#include <Wire.h>
#include <Adafruit_TCA8418.h>
#include <vector>
#include <algorithm>
#include <Buzzer.h>
#include <USB.h>
#include <USBMSC.h>
#include <SD_MMC.h>
#include <Preferences.h>
#include <stdint.h>
#include <Adafruit_MPR121.h>
#include <esp_cpu.h>
#include <RTClib.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

// core files
#include "config.h"
#include "assets.h"
#include "globals.h"

// modules
#include "../lib/pocketmage_eink/include/pocketmage_eink.h"
#include "../lib/pocketmage_eink/include/pocketmage_setup_eink.h"
#include "../lib/pocketmage_oled/include/pocketmage_oled.h"
#include "../lib/pocketmage_oled/include/pocketmage_setup_oled.h"

// font files
#include "Fonts/Font3x7FixedNum.h"
#include "Fonts/Font4x5Fixed.h"
#include "Fonts/Font5x7Fixed.h"