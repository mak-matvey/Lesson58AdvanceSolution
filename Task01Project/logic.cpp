#include "logic.h"

int find_largest_square_plot(int length, int width)
{
    if (length < 0 || width < 0)
    {
        return -1;
    }

    if (width == 0) {
        return length;
    }

    return find_largest_square_plot(width, length % width);
}