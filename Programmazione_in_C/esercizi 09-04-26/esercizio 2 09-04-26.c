/* Esercizio determinante matrice 09-04-26
    Riccardo Aviano
*/

#include <stdio.h>

#define N 2

void determinante();

int main()
{
    determinante();

    return 0;
}

void determinante()
{
    int mat[N][N];
    int det;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Inserisci un valore per riempire la matrice: ");
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("\t%d", mat[i][j]);
        }

        printf("\n");
    }

    // Calcolo il determinante

    det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

    printf("Il determinante vale: %d", det);
}