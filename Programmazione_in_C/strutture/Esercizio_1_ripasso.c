/* Creare un programma che crei 
1. 20 numeri interi
2. Riempi l'array con numeri casuali tra 1-100
3. Stampi tutti i valori dell'array
4. Calcoli e stampi:
    -numero massimo
    -numero minimmo
    -media dei valori
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define MIN 1
#define N 20

int main()
{
    int array[N];

    srand(time (NULL));

    // Riempio array con numeri random
    for (int i = 0; i < N; i++)
    {
        array[i] = MIN + rand() % (MAX - MIN + 1);

        printf("%d\n", array[i]);
    }

    int n_max = array[0];
    int n_min = array[0];
    float n_media = 0;

    // Min e Max
    for (int i = 0; i < N; i++)
    {
        if (array[i] > n_max)
        {
            n_max = array[i];
        }
        else if (array[i] < n_min)
        {
            n_min = array[i];
        }
    }

    // Media

    float somma = 0; 

    for (int i = 0; i < N; i++)
    {
        somma = somma + array[i];
    }

    n_media = somma / N;

    // Stampo
    printf("Il numero massimo presente nell'array vale: %d\n", n_max);
    printf("Il numero minimo presente nell'array vale: %d\n", n_min);
    printf("La media dei numeri presenti nell'array vale: %.2f\n", n_media);

    return 0;
}