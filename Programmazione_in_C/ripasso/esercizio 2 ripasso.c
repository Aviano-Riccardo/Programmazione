#include <stdio.h>

#define N 12

int main()
{
    int vett[N];
    int num;
    int cont;

    printf("Inserisci %d numeri interi, anche ripetuti: ", N);
    for (int i = 0; i < N; i ++)
    {
        scanf("%d", num);
        vett[i] = num;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d \t", vett[i]);
    }

    printf("\n Inserisci il numero che vuoi cercare: ");
    scanf("%d", num);

    for (int i = 0; i < N; i++)
    {
        if (vett[i] == num)
        {
            cont ++;
        }
    }

    if (cont >= 1)
    {
        printf("Il numero %d esiste e compare", num);
    }
    else
    {
        printf("Il numero %d non esiste e non compare");
    }

    return 0;
}