/* 2. Usando un vettore di 8 numeri interi:
    Chiedi in input i valori.
    Calcola e stampa:
         La somma
         La media aritmetica
*/

#include <stdio.h>
#define N 8

int main()
{
    int array [N];
    int somma = 0, cont = 0;
    float media = 0;

    for (int i = 0; i < N; i++)
    {
        printf("Inserisci il valore %d: ", i + 1);
        scanf ("%d", &array[i]);
        somma = somma + array[i];
        cont = cont + 1;
    }

    media = somma / cont;

    printf("La somma vale: %d\n", somma);
    printf("La media vale: %0.2f", media);

    return 0;
    
}