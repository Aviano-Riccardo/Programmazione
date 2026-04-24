#include <stdio.h>

int sommaArray(int v[], int n);

int main()
{
    int n = 10;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il %d valore nell'array: ", i);
        scanf("%d", &v[i]);
    }

    int somma = sommaArray(v, n);
    printf("La somma degli elementi dell'array vale: %d", somma);

    return 0;
}

int sommaArray(int v[], int n)
{
    int somma = 0;

    for (int i = 0; i < n; i++)
    {
        somma = somma + v[i];
    }

    return somma;
}