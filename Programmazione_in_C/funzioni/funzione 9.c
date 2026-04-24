// Esercizio Temperature
// R. Aviano

#include <stdio.h>

float inserimentoDati();
float visualizzaDati();

int main()
{
    int menu;

    do
    {
        printf("=== Stazione Metereologica ===\n");
        printf("1. Inserisci nuova lettura\n");
        printf("2. Visualizza lettura\n");
        printf("0. Esci\n");
        printf("Scelta: ");
    } while (menu != 0);

    int scelta;

    switch (scelta)
    {
    case 1:
        inserimentoDati();
        break;
    
    case 2:

        visualizzaDati();
        break;
    
    case 0:
        printf("Uscita dal programma!");
        break;
    
    default:
        printf("Scelta non valida!");
    }

    return 0;
}