#include <stdio.h>
#include <stdlib.h>
#define N_OPT_MENU_PRI 4

int main()
{
    //menu inziale
    char titolo[] = {"Menu Principale"};
    char *opzioni[N_OPT_MENU_PRI] = {"Importa corsi da un file","Visualizza corsi","Riordina i corsi","Esci"};
    menu(opzioni,N_OPT_MENU_PRI , titolo);

    return 0;
}
