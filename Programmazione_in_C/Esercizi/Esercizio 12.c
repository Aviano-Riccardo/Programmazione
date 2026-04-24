// Inserire un numero positivo e calcolane il fattoriale

#include <stdio.h>

int main()
{
    int numero, i;
    int fattoriale = 1;

    printf("Inserisci un numero positivo: ");
    scanf("%d", &numero);
    
    while (numero < 0)
    {
        printf("Inserisci un numero positivo. RIPROVA! ");
        scanf("%d", &numero);
    }

        for (i = 1; i <= numero; i++)
    {
        fattoriale = fattoriale * i;
    }

    printf("Il fattoriale di %d vale: %d", numero, fattoriale);

    return 0;

}