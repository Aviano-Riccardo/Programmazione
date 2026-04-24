#include <stdio.h>

int main()
{
    int mat[3][4]; // prima parentesi righe seconda colonne
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Inserisci l'elemento riga = %d e colonna = %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // stampa

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\t%d", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}