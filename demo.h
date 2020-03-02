/**
 * @file demo.h
 *
 */

#ifndef DEMO_H
#define DEMO_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lvgl.h"
#include "lv_ex_conf.h"
#else
#include "../../../lvgl/lvgl.h"
#include "../../../lv_ex_conf.h"
#endif

#if LV_USE_DEMO

#include "ft2build.h"
#include FT_FREETYPE_H

/*********************
 *      DEFINES
 *********************/

typedef struct {
    FT_Face     face;      /* handle to face object */

}lv_font_fmt_freetype_dsc_t;

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a demo application
 */
void demo_create(void);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_DEMO*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*DEMO_H*/
