#include <stdio.h>

int massimo(int v[], int n);

int main()
{
    int n = 8;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il %d valore nell'array: ", i);
        scanf("%d", &v[i]);
    }

    int max = massimo(v, n);

    printf("Il valore massimo presente nell'array vale: %d", max);

    return 0;
}

int massimo(int v[], int n)
{
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }

    return max;
}