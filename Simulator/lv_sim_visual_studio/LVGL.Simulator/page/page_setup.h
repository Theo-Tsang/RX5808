﻿#ifndef __page_menu_setup_H
#define __page_menu_setup_H



#ifdef __cplusplus
extern "C" {
#endif

    /*********************
    *      INCLUDES
    *********************/
#include "../lvgl/lvgl.h"
    /*********************
    *      DEFINES
    *********************/

    /**********************
    *      TYPEDEFS
    **********************/

    /**********************
    * GLOBAL PROTOTYPES
    **********************/
    extern lv_indev_t* indev_keypad;
    void page_setup_create(void);
    /**********************
    *      MACROS
    **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif




#endif
