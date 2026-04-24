/* 1. Scrivi un programma che:
    Dichiara un vettore di 10 numeri interi.
    Chiede all’utente di inserire i valori.
    Stampa tutti gli elementi del vettore.
*/

#include <stdio.h>
#define N 10

int main()
{
    int array [N];

    for (int i = 0; i < N; i++)
    {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("I numeri inseriti sonO: ");
    
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}