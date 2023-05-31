#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controlli.h"
#include "IO.h"
#include "function.h"

char* input_user(const char* request);

char * menu(char **sentence,size_t num_senteces, char *title)
{
    //stampa il nome del menu
    printf("%s:\n", title);

    // stampa le ozpioni
    int i=0;
    for(; i< num_senteces; i++ )
    {
        printf("\t[%d] - %s\n",(i+1), sentence[i]);
    }

    bool all_right;
    int choice;

    while(all_right == false)
    {
        char* choice_str = input_user("Inserisci una scelta: ");
        if (is_int(choice_str, strlen(choice_str)) == true)
        {
            choice = string_to_int(choice_str);
            printf("%d", choice);
            if (is_out_of_range(1, num_senteces, choice) == true)
                {
                    printf("\nErrore. Valore non intero oppure non in range.\nReinserisci: ");
                }
                else break;
        }
        else printf("\nErrore. Valore non intero oppure non in range.\nReinserisci: ");
    }
}

char* input_user(const char* request)
{
    printf("%s", request);

    // Allocazione di memoria per la risposta
    size_t buffer_size = 100;  // dimensione iniziale del buffer
    char* buffer = (char*)malloc(buffer_size * sizeof(char));

    // Lettura della risposta
    fgets(buffer, buffer_size, stdin);

    // Rimozione del carattere di nuova riga finale
    size_t length = strlen(buffer);
    if (length > 0 && buffer[length - 1] == '\n')
        buffer[length - 1] = '\0';

    return buffer;
}
