/* Author: ALOK KHULBAY.
Date : 26-04-2020.
Purpose: to self learn.
Program to print the resistor value according to color.
*/
#include "resistor_color.h"

static resistor_band_t bands[] = {BLACK, BROWN, RED, ORANGE, YELLOW,
                                  GREEN, BLUE, VIOLET, GREY, WHITE};

resistor_band_t colorCode(resistor_band_t code)
{
    return bands[code];
}

resistor_band_t *colors(void)
{
    return bands;
}