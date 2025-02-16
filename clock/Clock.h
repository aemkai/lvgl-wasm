#pragma once

#include <cstdint>
#include <chrono>
#include "Screen.h"
////#include <bits/unique_ptr.h>
#include "lv_style.h" ////#include <libs/lvgl/src/lv_core/lv_style.h>
#include "lv_obj.h" ////#include <libs/lvgl/src/lv_core/lv_obj.h>
#include "BatteryController.h" ////#include <Components/Battery/BatteryController.h>
#include "BleController.h" ////#include <Components/Ble/BleController.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {

      template <class T>
      class DirtyValue {
        public:
          explicit DirtyValue(T v) { value = v; }
          explicit DirtyValue(T& v) { value = v; }
          bool IsUpdated() const { return isUpdated; }
          T& Get() { this->isUpdated = false; return value; }

          DirtyValue& operator=(const T& other) {
            if (this->value != other) {
              this->value = other;
              this->isUpdated = true;
            }
            return *this;
          }
        private:
          T value;
          bool isUpdated = true;
      };
      class Clock : public Screen{
        public:
          Clock(DisplayApp* app,
                  Controllers::DateTime& dateTimeController,
                  Controllers::Battery& batteryController,
                  Controllers::Ble& bleController);
          ~Clock(); //// override;

          bool Refresh(); //// override;
          bool OnButtonPushed(); //// override;

          void OnObjectEvent(lv_obj_t *pObj, lv_event_t i);
        private:
            static const char* MonthsToStringLow(Pinetime::Controllers::DateTime::Months month);
            static const char* MonthShortToString(Pinetime::Controllers::DateTime::Months month);
            static const char* MonthShortToStringLow(Pinetime::Controllers::DateTime::Months month);
            static const char* DayOfWeekToString(Pinetime::Controllers::DateTime::Days dayOfWeek);
            static const char* DayOfWeekToStringLow(Pinetime::Controllers::DateTime::Days dayOfWeek);
            static const char* DayOfWeekShortToString(Pinetime::Controllers::DateTime::Days dayOfWeek);
            static const char* DayOfWeekShortToStringLow(Pinetime::Controllers::DateTime::Days dayOfWeek);

            static char const* DaysString[];
            static char const* DaysStringShort[];
            static char const* DaysStringLow[];
            static char const* DaysStringShortLow[];
            static char const* MonthsString[];
            static char const* MonthsStringLow[];
            static char const* MonthsLow[];

          char displayedChar[7];

          uint16_t currentYear = 1970;
          Pinetime::Controllers::DateTime::Months currentMonth = Pinetime::Controllers::DateTime::Months::Unknown;
          Pinetime::Controllers::DateTime::Days currentDayOfWeek = Pinetime::Controllers::DateTime::Days::Unknown;
          uint8_t currentDay = 0;

          DirtyValue<uint8_t> batteryPercentRemaining  {0};
          DirtyValue<bool> bleState {false};
          DirtyValue<std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>> currentDateTime;
          DirtyValue<uint32_t> stepCount  {0};
          DirtyValue<uint8_t> heartbeat  {0};


          lv_obj_t* label_time;
          lv_obj_t* label_time_ampm;
          lv_obj_t* label_date;
          lv_obj_t* backgroundLabel;
          lv_obj_t * batteryIcon;
          lv_obj_t* label_volt;
          lv_obj_t * bleIcon;
          lv_obj_t* batteryPlug;
          lv_obj_t* heartbeatIcon;
          lv_obj_t* heartbeatValue;
          lv_obj_t* heartbeatBpm;
          lv_obj_t* stepIcon;
          lv_obj_t* stepValue;
          lv_obj_t* notificationIcon;          

          /* additional MK */
          // Allgemein
          lv_obj_t* label_sec; 
          
		// Binary Watch
        uint8_t minutes_old = 0;
		uint8_t seconds_old = 0;
          
		// Time
		#define LED_SIZE1	37
		#define LED_RING1	2
		#define LED_SPACE_H1   (LED_SIZE1/12)
		#define LED_SPACE_V1   (LED_SIZE1/4)
		#define LED_COL_MIN_ON		lv_color_hex(0xDD0000)
		#define LED_COL_MIN_OFF		lv_color_hex(0x220000)
		#define LED_COL_HOUR_ON		lv_color_hex(0x00DD00)
		#define LED_COL_HOUR_OFF	lv_color_hex(0x002200)
		#define LED_COL_RING		lv_color_hex(0x999999)
		lv_obj_t * minLED0;
		lv_obj_t * minLED1;
		lv_obj_t * minLED2;
		lv_obj_t * minLED3;
		lv_obj_t * minLED4;
		lv_obj_t * minLED5;

		lv_obj_t * hourLED0;
		lv_obj_t * hourLED1;
		lv_obj_t * hourLED2;
		lv_obj_t * hourLED3;
		lv_obj_t * hourLED4;
          
        #define LED_COL_SEC_ON		lv_color_hex(0xDDDD00)
		#define LED_COL_SEC_OFF		lv_color_hex(0x444400)
		#define NR_SECBARS	4
		#define SECBAR_SPACE_V	5
		lv_obj_t* secBar[NR_SECBARS];
          
          
          
		// Date
		#define LED_SIZE2	18
		#define LED_RING2	2
		#define LED_SPACE_H2   (LED_SIZE2/6)
		#define LED_SPACE_V2   (LED_SIZE2/4)
		#define LED_COL_DAY_ON		lv_color_hex(0xCCCCCC)
		#define LED_COL_DAY_OFF		lv_color_hex(0x222222)	
		#define LED_COL_MON_ON		lv_color_hex(0xCCCCCC)
		#define LED_COL_MON_OFF		lv_color_hex(0x222222)	
		#define LED_COL_RING		lv_color_hex(0x999999)		
		lv_obj_t * dayLED0;
		lv_obj_t * dayLED1;
		lv_obj_t * dayLED2;
		lv_obj_t * dayLED3;
		lv_obj_t * dayLED4;

		lv_obj_t * monLED0;
		lv_obj_t * monLED1;
		lv_obj_t * monLED2;
		lv_obj_t * monLED3;
          
          
          
          
          Controllers::DateTime& dateTimeController;
          Controllers::Battery& batteryController;
          Controllers::Ble& bleController;

          bool running = true;

      };
    }
  }
}
