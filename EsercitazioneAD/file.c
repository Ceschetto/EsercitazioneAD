#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#define MAX_STR 100
int read_file(char * file_name)
{
    char * str;
    FILE *file;

    if(file = fopen(file_name, "r") == NULL)
    {
        //errore
    }
    if (fgets(str, MAX_STR, file) = NULL)
    {
        //error or end file
    }
    fclose(file);
    return str;
}
