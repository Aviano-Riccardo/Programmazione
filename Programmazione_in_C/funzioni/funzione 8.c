#include <stdio.h>

int calcolopotenza(int base, int esponente);

int main()
{
    int base, esponente;

    printf("Inserisaci la base: ");
    scanf("%d", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &esponente);

    int pot = calcolopotenza(base, esponente);

    printf("%d elevato a %d vale: %d", base, esponente, pot);

    return 0;
}

int calcolopotenza(int base, int esponente)
{
    int potenza = 1;
    int risu;

    if (base == 0 && esponente == 0)
    {
        printf("Indeterminata");
    }

    else if (esponente < 0)
    {    
        for (int i = 1; i <= esponente; i++)
        {
            risu = potenza * base;
        }

        potenza = 1 / risu;
    }
    else 
    {
        for (int i = 1; i <= esponente; i++)
        {
            potenza = potenza * base;
        }
    }

    return potenza;
}