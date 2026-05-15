/* 2. Massimo, minimo e media (numeri random)
    Genera un array di 30 numeri casuali tra 0 e 500.
    Calcola e stampa:
        • il massimo
        • il minimo
        • la media
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 30

int  main()
{
    int numeri[N];
    srand(time(NULL));
    int max = 0;
    int min = numeri[N];
    int somma = 0;
    float media;

    for (int i = 0; i < N; i ++)
    {
        numeri[i] = rand() % 501;
        printf("%d \t", numeri[i]);
        somma = somma + numeri[i];

        if (numeri[i] > max)
        {
            max = numeri[i];
        }
        else if (numeri[i] < min)
        {
            min = numeri[i];
        }
    }

    media = somma / N;

    printf("\n");

    printf("La media dei numeri generati vale: %.2f\n", media);
    printf("Il numero massimo generato equivale a: %d\n", max);
    printf("Il numero minimo generato equivale a: %d\n", min);

    return 0;
}