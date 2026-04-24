/* 5 Dato un vettore di 10 elementi:
    Inverti l’ordine degli elementi. Es: [1, 2, 3, 4] → [4, 3, 2, 1]
    Stampa il vettore originale e quello invertito.
*/

#include <stdio.h>
#define N 10

int main()
{
    int array[N];

    for (int i = 0; i < N; i++)
    {
        printf("Inserisci il %d valore: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d \t", array[i]);
    }

    return 0;
}