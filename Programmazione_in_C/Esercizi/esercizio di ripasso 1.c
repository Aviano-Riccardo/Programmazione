#include <stdio.h>
#define N 5

int main()
{
    int array[N];
    int con = 0;
    int max;

    for (int i = 0; i < N; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &array[i]);

        if(array[i] > max)
        {
            max = array[i];
        }

        con = con + array[i];
    }

    printf("Somma vale: %d e il massima vale: %d", con, max);

    return 0;
}