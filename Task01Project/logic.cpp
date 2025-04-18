#include "logic.h"

int find_largest_square_plot(int length, int width)
{
    if (length <= 0 || width <= 0)
    {
        return -1;
    }

    if (length == width) {
        return length;
    }

    if (length > width)
    {
        return find_largest_square_plot(length - width, width);
    }

    return find_largest_square_plot(length, width - length);
}