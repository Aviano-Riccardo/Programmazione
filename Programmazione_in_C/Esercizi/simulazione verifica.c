#include <stdio.h>
#include <string.h>

#define G 5
#define P 3

int main()
{
    int mat[P][G];

    // punto 1

    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < G; j++)
        {
            printf("Inserisci le vendte del prodotto %d in giorno %d: ", i, j);
            scanf("%d", &mat[i][j]);
            while (mat[i][j] < 0)
            {
                printf("Inserisci un valore MAGGIORE o UGUALE a 0: ");
                scanf("%d", &mat[i][j]);
            }
        }
    }

    // punto 2

    char nomi_giorni[G][4] = {"Lun", "Mar", "Mer", "Gio", "Ven"};
    char nomi_prodotti[P][2] = {"A", "B", "C"};

    printf("\n-----Tabella settimanale-----\n");
    printf("%s", nomi_prodotti[]);
    printf("\n");

    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < G; j++)
        {
            printf("%s", nomi_prodotti[i]);
            printf("\t %d", mat[i][j]);
            printf("\n");
        }
    }

    // punto 3

    int totale = 0;
    float media = 0;

    for (int i = 0; i < P; i++)
    {
        for(int j = 0; j < G; j++)
        {
            totale = totale + mat[i][j];
        }
    }

    for (int i = 0; i < G; i++)
    {
        int array[i];
        for(int j = 0; j < P; j++)
        {
            int array[j];

            media = array[j] / array[i];
        }
    }

    printf("Il totale dei prodotti venduti vale: %d e la media giornaliera vale: %.2f", totale, media);

    // punto 4

    int max_vendite = 0;
    int min_vendite = 0;

    for (int i )
    return 0;
}