/* Leggi N numeri, memorizzali in un vettore e ribalta il vettore
    Per esempio:
-   valori dell'array: 15, 23, 35, 46, 51, 68, 12, 72;
-   valori ribaltati: 72, 12, 68, 51, 46, 35, 23, 15;
*/

#include <stdio.h>

#define N 8

int main()
{
    int vettore[N];
    int temp;

    for (int i = 0; i < N; i++)
    {
        printf("Insersci il %d valore dell'array: ", i);
        scanf("%d", & vettore[i]);
    }

    printf("-----Vettore originale-----\n");
    for (int i = 0; i < N; i ++)
    {
        printf("%d", vettore[i]);
    }

    for (int i = 0; i < N/2; i++)
    {
        temp = vettore[i];
        vettore[i] = vettore[N - 1 - i];
        vettore[N - 1 -i] = temp;
    }

    printf("\n-----Vettore ribaltato-----\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d", vettore[i]);
    }

    return 0;
}