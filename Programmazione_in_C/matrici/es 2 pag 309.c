#include <stdio.h>

#define N 2

int main()
{
    int A[N][N], B[N][N];

    printf("-------Inserisci i dati della matrice A------- \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Inserisci il dato della matrice di riga %d e colonna %d: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("-------Inserisci i dati della matrice B------- \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Inserisci il dato della matrice di riga %d e colonna %d: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    int C[N][N], D[N][N];

    printf("---Somma della matrice A e B--- \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("\t %d", C[i][j]);

        }

        printf("\n");
    }

    printf("---Moltiplicazione della matrice A e B--- \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            D[i][j] = A[i][j] * B[i][j];
            printf("\t %d", D[i][j]);

        }

        printf("\n");
    }
}