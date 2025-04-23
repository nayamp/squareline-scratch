idf_component_register(SRCS "squareline_scratch.c" "ui/ui.c" "ui/screens/ui_Screen1.c" "ui/components/ui_comp_hook.c" "ui/ui_helpers.c"
                    INCLUDE_DIRS "." "ui" 
			        REQUIRES lvgl
)
