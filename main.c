#include <stdio.h>
#include <stdlib.h>
#define N_OPT_MENU_PRI 4

void menu_principale();

void importa_corsi_da_file();

void visualizza_corsi();

void riordina_corsi();

int main()
{
    menu_principale();
    return 0;
}

void menu_principale()
{
    //menu inziale
    char titolo[] = {"Menu Principale"};
    char *opzioni[N_OPT_MENU_PRI] = {"Importa corsi da un file","Visualizza corsi","Riordina i corsi","Esci"};
    int scelta;
    scelta = menu(opzioni,N_OPT_MENU_PRI , titolo);
    while (scelta < 4)
    {
        switch(scelta)
        {
        case 1:
            importa_corsi_da_file();
        case 2:
            visualizza_corsi();
        case 3:
            riordina_corsi();
        default:
            {
            }
        }
        scelta = menu(opzioni,N_OPT_MENU_PRI , titolo);
    }
    printf("Grazie buona giornata\n");
}

void importa_corsi_da_file()
{
    printf("Non disponibile\n");
}

void visualizza_corsi()
{
    printf("Non disponibile\n");
}

void riordina_corsi()
{
    printf("Non disponibile\n");
}
