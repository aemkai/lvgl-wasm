#include "../lvgl.h" ////#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 76 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef JETBRAINS_MONO_76
#define JETBRAINS_MONO_76 1
#endif

#if JETBRAINS_MONO_76

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0025 "%" */
    0x1, 0xfc, 0x0, 0x0, 0x7, 0xe1, 0xff, 0xf0,
    0x0, 0x1, 0xf8, 0x7f, 0xff, 0x0, 0x0, 0x3f,
    0x1f, 0xff, 0xf0, 0x0, 0xf, 0xc7, 0xff, 0xff,
    0x0, 0x3, 0xf0, 0xfe, 0xf, 0xe0, 0x0, 0x7e,
    0x3f, 0x80, 0xfc, 0x0, 0x1f, 0x87, 0xe0, 0xf,
    0xc0, 0x7, 0xe0, 0xfc, 0x1, 0xf8, 0x0, 0xfc,
    0x1f, 0x80, 0x3f, 0x0, 0x3f, 0x3, 0xf0, 0x7,
    0xe0, 0xf, 0xc0, 0x7e, 0x0, 0xfc, 0x1, 0xf8,
    0xf, 0xc0, 0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x3,
    0xf0, 0x1f, 0x80, 0x3f, 0x0, 0x7e, 0x3, 0xf0,
    0x7, 0xe0, 0xf, 0xc0, 0xfc, 0x0, 0xfc, 0x1,
    0xf8, 0x3f, 0x0, 0x1f, 0x80, 0x3f, 0x7, 0xe0,
    0x3, 0xf8, 0xf, 0xe1, 0xf8, 0x0, 0x3f, 0x83,
    0xf8, 0x7e, 0x0, 0x7, 0xff, 0xff, 0xf, 0xc0,
    0x0, 0x7f, 0xff, 0xc3, 0xf0, 0x0, 0x7, 0xff,
    0xf0, 0xfc, 0x0, 0x0, 0x7f, 0xfc, 0x1f, 0x80,
    0x0, 0x1, 0xfc, 0x7, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0x80, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x3f, 0x80, 0x0, 0x0, 0xfc, 0x3f,
    0xfe, 0x0, 0x0, 0x3f, 0xf, 0xff, 0xe0, 0x0,
    0xf, 0xc3, 0xff, 0xfe, 0x0, 0x1, 0xf8, 0xff,
    0xff, 0xe0, 0x0, 0x7e, 0x1f, 0xc1, 0xfc, 0x0,
    0x1f, 0x83, 0xf0, 0x1f, 0x80, 0x3, 0xf0, 0xfc,
    0x1, 0xf8, 0x0, 0xfc, 0x1f, 0x80, 0x3f, 0x0,
    0x3f, 0x3, 0xf0, 0x7, 0xe0, 0x7, 0xe0, 0x7e,
    0x0, 0xfc, 0x1, 0xf8, 0xf, 0xc0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x3, 0xf0, 0xf, 0xc0, 0x3f,
    0x0, 0x7e, 0x3, 0xf0, 0x7, 0xe0, 0xf, 0xc0,
    0xfc, 0x0, 0xfc, 0x1, 0xf8, 0x1f, 0x80, 0x1f,
    0x80, 0x3f, 0x7, 0xe0, 0x3, 0xf8, 0xf, 0xe1,
    0xf8, 0x0, 0x7f, 0x1, 0xfc, 0x3f, 0x0, 0x7,
    0xff, 0xff, 0xf, 0xc0, 0x0, 0xff, 0xff, 0xe3,
    0xf0, 0x0, 0xf, 0xff, 0xf8, 0xfe, 0x0, 0x0,
    0xff, 0xfe, 0x1f, 0x80, 0x0, 0xf, 0xff, 0x87,
    0xe0, 0x0, 0x0, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x80, 0x0,

    /* U+002D "-" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x0, 0xf,
    0xe0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x1,
    0xfe, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x1, 0xfe, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0xf, 0xf0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0xf, 0xf0,
    0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x7f, 0x80, 0x0, 0x0, 0x1f,
    0xc0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x7f, 0x80, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x3, 0xfc, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0x0, 0xfe, 0x0,
    0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x1f, 0xe0,
    0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x3f,
    0x80, 0x0, 0x0, 0x1f, 0xe0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0xff, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0,
    0xf, 0xe0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0xff, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0x7, 0xf8, 0x0, 0x0, 0x1, 0xfc, 0x0,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x7, 0xf8,
    0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x0, 0xf,
    0xe0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x1,
    0xfc, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x1, 0xfe, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0xf, 0xfc, 0x0, 0x0, 0x1f, 0xff, 0xe0,
    0x0, 0x1f, 0xff, 0xfe, 0x0, 0xf, 0xff, 0xff,
    0xc0, 0x7, 0xff, 0xff, 0xf8, 0x3, 0xff, 0xff,
    0xff, 0x1, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0x80,
    0x7, 0xfc, 0x3f, 0xc0, 0x0, 0xff, 0x1f, 0xe0,
    0x0, 0x1f, 0xe7, 0xf8, 0x0, 0x7, 0xf9, 0xfc,
    0x0, 0x0, 0xfe, 0xff, 0x0, 0x0, 0x3f, 0xff,
    0x80, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x1, 0xff,
    0xf8, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x1f,
    0xff, 0x80, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0,
    0x1f, 0xff, 0x80, 0x0, 0x7, 0xff, 0xe0, 0x0,
    0x1, 0xff, 0xf8, 0x0, 0x0, 0x7f, 0xfe, 0x3,
    0xe0, 0x1f, 0xff, 0x81, 0xfc, 0x7, 0xff, 0xe0,
    0xff, 0x81, 0xff, 0xf8, 0x3f, 0xe0, 0x7f, 0xfe,
    0xf, 0xf8, 0x1f, 0xff, 0x83, 0xfe, 0x7, 0xff,
    0xe0, 0xff, 0x81, 0xff, 0xf8, 0x1f, 0xc0, 0x7f,
    0xfe, 0x3, 0xe0, 0x1f, 0xff, 0x80, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x0,
    0x7, 0xff, 0xe0, 0x0, 0x1, 0xff, 0xf8, 0x0,
    0x0, 0x7f, 0xfe, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x1, 0xff, 0xf8,
    0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x1f, 0xff,
    0xc0, 0x0, 0xf, 0xf7, 0xf0, 0x0, 0x3, 0xf9,
    0xfe, 0x0, 0x1, 0xfe, 0x7f, 0xc0, 0x0, 0xff,
    0x8f, 0xf8, 0x0, 0x7f, 0xc1, 0xff, 0x0, 0x3f,
    0xe0, 0x7f, 0xff, 0xff, 0xf8, 0xf, 0xff, 0xff,
    0xfc, 0x1, 0xff, 0xff, 0xfe, 0x0, 0x3f, 0xff,
    0xff, 0x0, 0x3, 0xff, 0xff, 0x0, 0x0, 0x3f,
    0xff, 0x0, 0x0, 0x0, 0x30, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0xf, 0xfc, 0x0, 0x0, 0x7, 0xff, 0x0,
    0x0, 0x7, 0xff, 0xc0, 0x0, 0x3, 0xff, 0xf0,
    0x0, 0x1, 0xff, 0xfc, 0x0, 0x1, 0xff, 0xff,
    0x0, 0x0, 0xff, 0xdf, 0xc0, 0x0, 0x7f, 0xe7,
    0xf0, 0x0, 0x7f, 0xe1, 0xfc, 0x0, 0x3f, 0xf0,
    0x7f, 0x0, 0xf, 0xf8, 0x1f, 0xc0, 0x3, 0xfc,
    0x7, 0xf0, 0x0, 0xfc, 0x1, 0xfc, 0x0, 0x3e,
    0x0, 0x7f, 0x0, 0xf, 0x0, 0x1f, 0xc0, 0x3,
    0x0, 0x7, 0xf0, 0x0, 0x80, 0x1, 0xfc, 0x0,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x1f,
    0xc0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x1,
    0xfc, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x1, 0xfc, 0x0,
    0x0, 0x0, 0x7f, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+0032 "2" */
    0x0, 0x7, 0xfc, 0x0, 0x0, 0x1f, 0xff, 0xe0,
    0x0, 0x1f, 0xff, 0xfe, 0x0, 0xf, 0xff, 0xff,
    0xe0, 0x7, 0xff, 0xff, 0xfc, 0x3, 0xff, 0xff,
    0xff, 0x81, 0xff, 0xc0, 0x7f, 0xe0, 0xff, 0x80,
    0x7, 0xfc, 0x3f, 0xc0, 0x0, 0xff, 0x1f, 0xe0,
    0x0, 0x1f, 0xe7, 0xf0, 0x0, 0x3, 0xf9, 0xfc,
    0x0, 0x0, 0xfe, 0xff, 0x0, 0x0, 0x1f, 0xff,
    0x80, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x1, 0xff,
    0xf8, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x1f,
    0xc0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x1,
    0xfc, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0,
    0x7, 0xf8, 0x0, 0x0, 0x1, 0xfe, 0x0, 0x0,
    0x0, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xc0, 0x0,
    0x0, 0x1f, 0xe0, 0x0, 0x0, 0xf, 0xf0, 0x0,
    0x0, 0x7, 0xfc, 0x0, 0x0, 0x3, 0xfe, 0x0,
    0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x3, 0xfe, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0x7f,
    0xc0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x1f,
    0xf8, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0x7,
    0xfe, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0,
    0xff, 0x80, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0,
    0x3f, 0xe0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff,
    0xff, 0xdf, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff,
    0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff,
    0xff, 0xff, 0xc0,

    /* U+0033 "3" */
    0x3f, 0xff, 0xff, 0xfe, 0xf, 0xff, 0xff, 0xff,
    0x83, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff,
    0xf8, 0x3f, 0xff, 0xff, 0xfe, 0xf, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x0, 0x7f, 0x80, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x1, 0xfc, 0x0,
    0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x7f, 0x80,
    0x0, 0x0, 0x3f, 0xc0, 0x0, 0x0, 0x1f, 0xe0,
    0x0, 0x0, 0x7, 0xff, 0x80, 0x0, 0x1, 0xff,
    0xfc, 0x0, 0x0, 0x7f, 0xff, 0xc0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x7, 0xff, 0xff, 0x0, 0x1,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x1f, 0xfc, 0x0,
    0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xe0,
    0x0, 0x0, 0x7, 0xf8, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x1, 0xff, 0xf8,
    0x0, 0x0, 0x7f, 0xff, 0x0, 0x0, 0x3f, 0xdf,
    0xc0, 0x0, 0xf, 0xe7, 0xf8, 0x0, 0x7, 0xf9,
    0xfe, 0x0, 0x1, 0xfe, 0x3f, 0xc0, 0x0, 0xff,
    0xf, 0xfc, 0x0, 0xff, 0x81, 0xff, 0xff, 0xff,
    0xe0, 0x3f, 0xff, 0xff, 0xf0, 0x7, 0xff, 0xff,
    0xf8, 0x0, 0xff, 0xff, 0xf8, 0x0, 0xf, 0xff,
    0xfc, 0x0, 0x0, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0xc0, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x1f, 0xe0,
    0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x0, 0x7f, 0x80, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0xfe, 0x0,
    0x0, 0x1, 0xfe, 0x0, 0x0, 0x3, 0xfc, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x7, 0xf8, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0xf, 0xf0, 0x0,
    0x0, 0x1f, 0xe0, 0x0, 0x0, 0x1f, 0xe0, 0x0,
    0x0, 0x3f, 0xc0, 0x0, 0x0, 0x3f, 0x80, 0x0,
    0x0, 0x7f, 0x80, 0x0, 0x0, 0xff, 0x0, 0x0,
    0x0, 0xff, 0x0, 0x0, 0x1, 0xfe, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x3, 0xfc, 0x0, 0x0,
    0x7, 0xf8, 0x0, 0x7f, 0x7, 0xf8, 0x0, 0x7f,
    0xf, 0xf0, 0x0, 0x7f, 0xf, 0xe0, 0x0, 0x7f,
    0x1f, 0xe0, 0x0, 0x7f, 0x3f, 0xc0, 0x0, 0x7f,
    0x3f, 0xc0, 0x0, 0x7f, 0x7f, 0x80, 0x0, 0x7f,
    0x7f, 0x0, 0x0, 0x7f, 0xff, 0x0, 0x0, 0x7f,
    0xfe, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7f,
    0xfe, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,

    /* U+0035 "5" */
    0x7f, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xfc,
    0x7f, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xfc,
    0x7f, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xfc,
    0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x7f, 0x3, 0xfc, 0x0,
    0x7f, 0xf, 0xff, 0x80, 0x7f, 0x3f, 0xff, 0xc0,
    0x7f, 0x7f, 0xff, 0xf0, 0x7f, 0x7f, 0xff, 0xf8,
    0x7f, 0xff, 0xff, 0xf8, 0x7f, 0xf8, 0x1f, 0xfc,
    0x7f, 0xe0, 0x7, 0xfc, 0x7f, 0xc0, 0x1, 0xfe,
    0x7f, 0x80, 0x1, 0xfe, 0x7f, 0x80, 0x0, 0xfe,
    0x7f, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f,
    0xfe, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xfe,
    0xff, 0x0, 0x0, 0xfe, 0x7f, 0x0, 0x1, 0xfe,
    0x7f, 0x80, 0x3, 0xfc, 0x3f, 0xe0, 0x7, 0xfc,
    0x3f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf0,
    0xf, 0xff, 0xff, 0xe0, 0x7, 0xff, 0xff, 0xc0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x7f, 0xfc, 0x0,
    0x0, 0x1, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x3f, 0xc0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0xf,
    0xf0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x1f, 0xe0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x3f, 0xc0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x1f,
    0xe0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x1f, 0xe0,
    0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0x0, 0x3, 0xf8, 0x7f, 0x80, 0x0,
    0x7f, 0x9f, 0xff, 0x0, 0x7, 0xf7, 0xff, 0xf8,
    0x0, 0xfe, 0xff, 0xff, 0xe0, 0xf, 0xff, 0xff,
    0xff, 0x1, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xfe,
    0x7, 0xff, 0x83, 0xff, 0x0, 0xf, 0xfc, 0x3f,
    0xe0, 0x0, 0x7f, 0xc7, 0xfc, 0x0, 0x3, 0xfe,
    0x7f, 0x80, 0x0, 0x1f, 0xe7, 0xf0, 0x0, 0x0,
    0xfe, 0x7f, 0x0, 0x0, 0xf, 0xff, 0xf0, 0x0,
    0x0, 0xff, 0xfe, 0x0, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7, 0xff,
    0xe0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0,
    0x7, 0xff, 0xe0, 0x0, 0x0, 0x7f, 0x7f, 0x0,
    0x0, 0xf, 0xe7, 0xf0, 0x0, 0x0, 0xfe, 0x7f,
    0x80, 0x0, 0x1f, 0xe3, 0xf8, 0x0, 0x1, 0xfc,
    0x3f, 0xc0, 0x0, 0x3f, 0xc1, 0xfe, 0x0, 0x7,
    0xf8, 0x1f, 0xf8, 0x1, 0xff, 0x80, 0xff, 0xff,
    0xff, 0xf0, 0x7, 0xff, 0xff, 0xfe, 0x0, 0x3f,
    0xff, 0xff, 0xc0, 0x1, 0xff, 0xff, 0xf8, 0x0,
    0x7, 0xff, 0xfe, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0x6, 0x0, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0xf, 0xef,
    0xe0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0x1f,
    0xef, 0xe0, 0x0, 0x1, 0xfc, 0xfe, 0x0, 0x0,
    0x1f, 0xcf, 0xe0, 0x0, 0x3, 0xf8, 0xfe, 0x0,
    0x0, 0x3f, 0x8f, 0xe0, 0x0, 0x7, 0xf8, 0xfe,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xf,
    0xe0, 0x0, 0x0, 0x1, 0xfe, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x3f, 0xc0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0, 0x7f, 0x80, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0xf,
    0xf0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x1f, 0xe0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x3, 0xfc, 0x0,
    0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0,
    0xf, 0xe0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x0, 0x1f, 0xe0, 0x0, 0x0, 0x1, 0xfc, 0x0,
    0x0, 0x0, 0x3f, 0xc0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x7,
    0xf8, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0xf, 0xf0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x1, 0xfe, 0x0,
    0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x3, 0xfc,
    0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0x0, 0x7f, 0x80, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x7, 0xfe, 0x0, 0x0, 0x3, 0xff, 0xfc,
    0x0, 0x0, 0xff, 0xff, 0xf0, 0x0, 0x3f, 0xff,
    0xff, 0xc0, 0x7, 0xff, 0xff, 0xfe, 0x0, 0xff,
    0xff, 0xff, 0xf0, 0x1f, 0xfc, 0x3, 0xff, 0x81,
    0xff, 0x0, 0xf, 0xf8, 0x3f, 0xe0, 0x0, 0x7f,
    0xc3, 0xfc, 0x0, 0x3, 0xfc, 0x7f, 0x80, 0x0,
    0x1f, 0xc7, 0xf8, 0x0, 0x1, 0xfe, 0x7f, 0x0,
    0x0, 0xf, 0xe7, 0xf0, 0x0, 0x0, 0xfe, 0x7f,
    0x0, 0x0, 0xf, 0xe7, 0xf0, 0x0, 0x0, 0xfe,
    0x7f, 0x0, 0x0, 0xf, 0xe7, 0xf8, 0x0, 0x1,
    0xfe, 0x3f, 0x80, 0x0, 0x1f, 0xc3, 0xfc, 0x0,
    0x3, 0xfc, 0x1f, 0xc0, 0x0, 0x7f, 0x81, 0xff,
    0x0, 0xf, 0xf8, 0xf, 0xf8, 0x1, 0xff, 0x0,
    0x7f, 0xe0, 0x7f, 0xe0, 0x3, 0xff, 0x9f, 0xfc,
    0x0, 0xf, 0xff, 0xff, 0x0, 0x0, 0x7f, 0xff,
    0xe0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0, 0x7f,
    0xff, 0xe0, 0x0, 0xf, 0xff, 0xff, 0x0, 0x3,
    0xff, 0x9f, 0xfc, 0x0, 0x7f, 0xe0, 0x7f, 0xe0,
    0xf, 0xf8, 0x1, 0xff, 0x1, 0xfe, 0x0, 0x7,
    0xf8, 0x1f, 0xc0, 0x0, 0x3f, 0x83, 0xf8, 0x0,
    0x1, 0xfc, 0x7f, 0x80, 0x0, 0x1f, 0xe7, 0xf0,
    0x0, 0x0, 0xfe, 0x7f, 0x0, 0x0, 0xf, 0xef,
    0xe0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0,
    0x7, 0xff, 0xe0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
    0x0, 0x7, 0xff, 0xf0, 0x0, 0x0, 0xff, 0xff,
    0x0, 0x0, 0xf, 0xf7, 0xf8, 0x0, 0x1, 0xfe,
    0x7f, 0xc0, 0x0, 0x3f, 0xe3, 0xfe, 0x0, 0x7,
    0xfc, 0x3f, 0xf8, 0x1, 0xff, 0xc1, 0xff, 0xff,
    0xff, 0xf8, 0xf, 0xff, 0xff, 0xff, 0x0, 0x7f,
    0xff, 0xff, 0xe0, 0x3, 0xff, 0xff, 0xfc, 0x0,
    0xf, 0xff, 0xff, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0x6, 0x0, 0x0,

    /* U+0039 "9" */
    0x0, 0x7, 0xfe, 0x0, 0x0, 0x3, 0xff, 0xfc,
    0x0, 0x0, 0xff, 0xff, 0xf0, 0x0, 0x1f, 0xff,
    0xff, 0x80, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x7f,
    0xff, 0xff, 0xf0, 0xf, 0xfc, 0x7, 0xff, 0x1,
    0xff, 0x0, 0xf, 0xf8, 0x3f, 0xe0, 0x0, 0x7f,
    0xc3, 0xfc, 0x0, 0x3, 0xfc, 0x7f, 0x80, 0x0,
    0x1f, 0xe7, 0xf0, 0x0, 0x1, 0xfe, 0x7f, 0x0,
    0x0, 0xf, 0xe7, 0xf0, 0x0, 0x0, 0xff, 0xfe,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x7f,
    0xfe, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0,
    0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x7f, 0xff, 0x0, 0x0, 0xf, 0xef,
    0xf0, 0x0, 0x0, 0xfe, 0x7f, 0x0, 0x0, 0x1f,
    0xe7, 0xf8, 0x0, 0x1, 0xfe, 0x7f, 0xc0, 0x0,
    0x3f, 0xc3, 0xfe, 0x0, 0x7, 0xfc, 0x3f, 0xf0,
    0x0, 0xff, 0x81, 0xff, 0xe0, 0x3f, 0xf8, 0xf,
    0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xf0,
    0x3, 0xff, 0xff, 0xff, 0x0, 0x1f, 0xff, 0xef,
    0xe0, 0x0, 0xff, 0xf9, 0xfc, 0x0, 0x1, 0xfe,
    0x1f, 0xc0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x1, 0xfe, 0x0, 0x0, 0x0, 0x1f,
    0xc0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x3f, 0x80, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x0, 0xff, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0x1, 0xfe, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x0, 0x3f,
    0x80, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0xff, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0,
    0x1, 0xfe, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0,

    /* U+003A ":" */
    0xf, 0x81, 0xff, 0x1f, 0xfd, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xf1, 0xff,
    0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0xff, 0x1f,
    0xfc, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x7f, 0xf3, 0xff, 0x8f, 0xf8, 0x4, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 730, .box_w = 43, .box_h = 57, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 307, .adv_w = 730, .box_w = 24, .box_h = 6, .ofs_x = 11, .ofs_y = 22},
    {.bitmap_index = 325, .adv_w = 730, .box_w = 34, .box_h = 72, .ofs_x = 6, .ofs_y = -8},
    {.bitmap_index = 631, .adv_w = 730, .box_w = 34, .box_h = 58, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 878, .adv_w = 730, .box_w = 34, .box_h = 56, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 1116, .adv_w = 730, .box_w = 34, .box_h = 57, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 1359, .adv_w = 730, .box_w = 34, .box_h = 57, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 1602, .adv_w = 730, .box_w = 32, .box_h = 56, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 1826, .adv_w = 730, .box_w = 32, .box_h = 57, .ofs_x = 7, .ofs_y = -1},
    {.bitmap_index = 2054, .adv_w = 730, .box_w = 36, .box_h = 58, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 2315, .adv_w = 730, .box_w = 36, .box_h = 56, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 2567, .adv_w = 730, .box_w = 36, .box_h = 58, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 2828, .adv_w = 730, .box_w = 36, .box_h = 57, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 3085, .adv_w = 730, .box_w = 13, .box_h = 44, .ofs_x = 16, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x8
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 37, .range_length = 9, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 47, .range_length = 12, .glyph_id_start = 3,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

lv_font_t jetbrains_mono_76 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 72,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if JETBRAINS_MONO_76*/

