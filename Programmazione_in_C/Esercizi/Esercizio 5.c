#include <stdio.h>

int main ()
{
    int num;
    printf("Inserisci un numero intero, positivo, da tastiera: ");
    scanf("%d", & num);

    if(num%2==0)
    {
        printf("Il numero e' pari.");
    }

    else

    {
        printf("Il numero e' dispari.");
    }

    return 0;
}