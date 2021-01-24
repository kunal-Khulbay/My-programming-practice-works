/*Author : ALOK KHULBAY.
Date: 22-04-2020.
Purpose:To self learn from Exasicm website.
Program of darts.
*/
#include "darts.h"
#include <math.h>

uint8_t score(coordinate_t landing_coords)
{
    float distance = sqrt(pow(landing_coords.x, 2) + pow(landing_coords.y, 2));

    if (distance <= 1)
        return 10;
    if (distance <= 5)
        return 5;
    if (distance <= 10)
        return 1;
    return 0;
}
