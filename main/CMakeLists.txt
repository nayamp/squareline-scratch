idf_component_register(
    
SRCS "squareline_scratch.c" 
"ui/ui.c"  "ui/ui_helpers.c"
"ui/components/ui_comp_hook.c"  "ui/ui_events.c" "ui/ui_theme_manager.c" "ui/ui_themes.c" 
"ui/screens/Ui_ALARMS.C" "ui/screens/ui_BathroomYesNo.c" "ui/screens/ui_DistanceWalked.c" "ui/screens/ui_HomeScreen.c" "ui/screens/ui_MedEditorPage1.c" "ui/screens/ui_EditNewAlarm.c" "ui/screens/ui_NewAlarm.c"
"ui/images/ui_img_clock32x32_png.c" "ui/images/ui_img_plus32x32_png.c" 
"rtc/rtc_timer.c"
                    INCLUDE_DIRS "." "ui" 
			        REQUIRES lvgl
)
