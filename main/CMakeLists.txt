idf_component_register(SRCS "squareline_scratch.c" "main.c" "ui/ui.c" 
                    INCLUDE_DIRS "." "ui" 
			        REQUIRES lvgl lvgl_esp32_drivers
)
