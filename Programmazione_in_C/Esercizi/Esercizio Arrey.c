#include <stdio.h>
#define NUMERI  6

int main()
{
    int array [NUMERI];
    for (int i = 0; i < NUMERI; i++)
    {
        printf("Inserisci il numero %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nNumeri in ordine inverso: \n");

    for (int i = NUMERI - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}