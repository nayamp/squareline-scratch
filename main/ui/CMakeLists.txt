SET(SOURCES screens/ui_HomeScreen.c
    screens/ui_ALARMS.c
    screens/ui_NewAlarm.c
    screens/ui_MedEditorPage1.c
    screens/ui_BathroomYesNo.c
    screens/ui_DistanceWalked.c
    screens/ui_EditNewAlarm.c
    ui_theme_manager.c
    ui_themes.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_plus32x32_png.c)

add_library(ui ${SOURCES})
