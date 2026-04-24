#include <stdio.h>

int main()
{
    int righe, colonne;

    printf("Inserisci il numero di righe: ");
    scanf("%d", &righe);
    printf("Inserisci il numero di colonne: ");
    scanf("%d", &colonne);

    if (righe == colonne)
    {
        int mat[righe][colonne];

        printf("La  matrice e' quadrata.\n");

        for (int i = 0; i < righe; i++)
        {
            for (int j = 0; j < colonne; j++)
            {
                if (i == j)
                {
                    mat[i][j] = 1; //diagonale principale
                }
                else
                {
                    mat[i][j] = 0; //altrove
                }
            }
        }

        printf("\nRisultato: \n");

        for (int i = 0; i < righe; i++)
        {
            for (int j = 0; j < colonne; j++)
            {
                printf("\t%d", mat[i][j]);
            }

            printf("\n");
        }
    }

    else 
    {
        printf("Non e' una matrice quadrata.");
    }
    
    return 0;
}