#include <stdio.h>

int main()
{
    int num;
    printf("Inserisci un numero da tastiera: ");
    scanf("%d", &num);

    if(num > 0)

    {
        printf("Il numero e' positivo.");
    }

    else if(num < 0)

    {
        printf("Il numero inserito e' negativo");
    }

    else

    {
        printf("Il numero inserito e' nullo");
    }

}