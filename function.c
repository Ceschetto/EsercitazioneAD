#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "function.h"

int string_to_int(char *str)
{
    return atoi(str);
}

void growing_bubble_sort_(int *array[], int index)
{
    bool ordered = false; // stato di ordinamento
    for (int j = index; j > 0 && ordered == false; j--)
    {
        ordered = true; // cambio di stato
        for (int i = 0; i < index - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_int(&array[i], &array[i + 1]);
                ordered = false;
            }
        }
    }
}

void descending_bubble_sort_(int *array[], int index)
{
    bool ordered = false; // stato di ordinamento
    for (int j = index; j > 0 && ordered == false; j--)
    {
        ordered = true; // cambio di stato
        for (int i = 0; i < index - 1; i++)
        {
            if (array[i] < array[i + 1])
            {
                swap_int(&array[i], &array[i + 1]);
                ordered = false;
            }
        }
    }
}

void swap_int(int element1, int element2)
{
    int temp;
    element1 = temp;
    element1 = element2;
    element2 = temp;
}