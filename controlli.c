#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "control.h"

bool is_int(char * str, size_t str_size)
{
    int i = 0;
    while((str[i] != NULL) && i < str_size )
    {
        if (isdigit(str[i]) == 0) return false;
        i++;
    }
    return true;
}

bool is_out_of_range(size_t min, size_t max, int value)
{
    if(value < min || value > max)
    {
        return true;
    }
    else
    {
        return false;
    }
}
