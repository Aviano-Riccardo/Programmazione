#include <stdio.h>
#define MAX_R 10
#define MAX_C 20

int main()
{
    int n, m;

    printf("Inserisci il numero di righe (max %d): ", MAX_R);
    scanf("%d", &n);
    while (n <= 0 || n > MAX_R)
    {
        printf("Valore non valido, inserisci un altro valore: ");
        scanf("%d", &n);
    }

    printf("Inserisci il numero di colonne (max %d): ", MAX_C);
    scanf("%d", &m);
    while (m <= 0 || m > MAX_C)
    {
        printf("Valore non valido, inserisci un altro valore: ");
        scanf("%d", &m);
    }
    // Riempio la matrice
    int mat[n][m];
    printf("-------Inserisci i dati della matrice------- \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Inserisci il dato della matrice di riga %d e colonna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    // Stampo la matrice

    printf("Matrice prima dello scambio: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\t %d", mat[i][j]);
        }

        printf("\n");
    }
    // Scambio le righe

    /* 5 8 10
       77 9 4*/
    for (int i = 0; i < n-1; i=i+2)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = mat[i][j]; // mat 0 0 = 5
            mat[i][j] = mat[i + 1][j]; // mat 1 0 = 77
            mat[i + 1][j] = temp; // sostituisci 77 con 5
        }
    }
    printf("Matrice dopo lo scambio: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\t%d", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}