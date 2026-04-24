#include <stdio.h>

void verifica(int num)
{
    if (num % 2 == 0)
    {
        printf("Il numero %d e' pari!", num);
    }

    else 
    {
        printf("Il numero %d e' dispari!", num);
    }
}

int main()
{
    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    int ritorno = verifica(num);

    return 0
}