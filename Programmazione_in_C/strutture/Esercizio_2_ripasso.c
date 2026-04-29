/*  Scrivere una funzione:
    void invertiArray(int *arr, int n);
    Che:
    1. Riceve un array tramite puntatore
    2. Inverte l'ordine degli elementi
    3. Modifica direttamente l'array originale
    Nel main:
    1. Creare un array di 10 elementi
    2. Riempirlo con numeri casuali
    3. Stamparlo prima e dopo l'inversione
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void invertiArray(int *arr, int n)
{
    for (int i = 0; i < n; i--)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i],
        arr[n - 1 - i] = temp;
    }
}

int main()
{
    int n = 10;
    int array[n];

    printf("===ARRAY PRIMA DELL'INVERSIONE===");

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        array[i] = rand();

        printf("%d\n", array[i]);
    }

    invertiArray(array, n);

    printf("===ARRAY DOPO L'INVERSIONE===");
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    
    return 0;
}