// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.3
// Project name: esp32-5.0

#ifndef _ESP32_5_0_UI_H
#define _ESP32_5_0_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_comp.h"
#include "ui_comp_hook.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui____initial_actions0;
extern int led;
LV_IMG_DECLARE(ui_img_background_png);    // assets\background.png
LV_IMG_DECLARE(ui_img_on_png);    // assets\on.png
LV_IMG_DECLARE(ui_img_off_png);    // assets\off.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
