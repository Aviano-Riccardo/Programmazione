/* 3. Dato un vettore di 6 numeri:
    Trova il valore massimo.
    Trova il valore minimo.
    Stampa anche la posizione (indice) di massimo e minimo.
*/

#include <stdio.h>
#define N 6

int main()
{
    int array[N];
    int max = N;
    int min = N;
    int cont = 1, contmin = 1, rmax, rmin;

    for (int i = 0; i < N; i++)
    {
        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            max = array[i];
            rmax = cont;
        }

        else if(array[i] < min)
        {
            min = array[i];
            rmin = cont;
        }

        cont = cont + 1;
        contmin = contmin + 1;
    }

    printf("Il valore massimo tra i numeri inseriti equivale a: %d e si trova in posizione: %d\n", max, rmax);
    printf("Il valore minimo tra i numeri inseriti equivale a: %d e si trova in posizione: %d", min, rmin);

    return 0;
}