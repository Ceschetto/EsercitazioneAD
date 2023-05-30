#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#define MAX_STR 100



//int read_file(char * file_name)
//{
//    char *str;
//    FILE *file;
//
//    if(file = fopen(file_name, "r") == NULL)
//    {
//        //errore
//    }
//    while(!feof(file))
//    {
//        if (fgets(str, MAX_STR, file) == NULL)
//        {
//            //error or end file
//        }
//        row_counter++;
//        
//    }
//    fclose(file);
//}



//apre il file prendendo dall'esterno il nome del file e la modalità di apertura
int open_file(char *file_name, char * read_mode)
{
    FILE *file = fopen(file_name, read_mode);
    if (file == NULL) return 1; 
}

//chiude un file 
int close_file(FILE *file)
{
    fclose(file);
}

//Legge una stringa di testo da un file. restituisce NULL in caso di errore o fine file.
char * read_line_of_file(FILE *file)
{
    char * str;
    fgets(str, MAX_STR, file);
    return str;
}