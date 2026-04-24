#include <stdio.h>

#define LIMITE MINORE 1
#define LIMITE MAGGIORE 12

int main()
{
    int numero;
    int i;
    int tabellina;
    printf("Inserisci un numero tra 1 e 12: ");
    scanf("%d", &numero);

    if (numero >=1 && numero <=12)
    {
        printf("La tabellina del numero %d vale:\n", numero);
        for(i = 1; i <= 10; i++)
        {
            tabellina = numero * i;
            printf(" %d \t", tabellina);
        }
        
    }

    else
    {
        printf("Valore non valido");
    }

    return 0;
}