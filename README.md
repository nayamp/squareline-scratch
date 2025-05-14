# squareline-scratch
this is a project whos main purpose is to remain ui agnostic, while still providing all functionality and basis for the waveshare esp32-s3 1.69 touch lcd. if downloading this repo, all that's needed for your own squareline studio made app is to set up your env settings to match the 16 bit swap 240x280 screen, and plug in the different pieces of the ui files to the CMakeLists.txt file. the idf_component.yml should be sufficient for most any project involving these, but lvgl version used is 8.38 due to lts status. 

Changes for the ESPCollar start with: 

ui.c --

        void ui_event_medDropdown1(lv_event_t * e) {
            lv_event_code_t event_code = lv_event_get_code(e);

            if (event_code == LV_EVENT_VALUE_CHANGED) {
                lv_obj_t * dropdown = lv_event_get_target(e);

                // Get selected category string
                char selected[32];
                lv_dropdown_get_selected_str(dropdown, selected, sizeof(selected));

                // Hide all med dropdowns first
                lv_obj_add_flag(ui_allergyMeds, LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(ui_antibioticMeds, LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(ui_anxietyMeds, LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(ui_painMeds, LV_OBJ_FLAG_HIDDEN);

                // Unhide the one that matches the selected category
                if (strcmp(selected, "ALLERGY") == 0) {
                    lv_obj_clear_flag(ui_allergyMeds, LV_OBJ_FLAG_HIDDEN);
                } else if (strcmp(selected, "ANTIBIOTIC") == 0) {
                    lv_obj_clear_flag(ui_antibioticMeds, LV_OBJ_FLAG_HIDDEN);
                } else if (strcmp(selected, "ANXIETY") == 0) {
                    lv_obj_clear_flag(ui_anxietyMeds, LV_OBJ_FLAG_HIDDEN);
                } else if (strcmp(selected, "PAIN") == 0) {
                    lv_obj_clear_flag(ui_painMeds, LV_OBJ_FLAG_HIDDEN);
                }
            }
        }

ui_events.c --
        #include "../rtc/rtc_timer.h"
        start_rtc_timer(5)

        at this current commit, this serves mostly as an exmaple of a working function to set the esp to sleep. it powers back on when powered by usb-c, but not by battery - need to figure out why.
