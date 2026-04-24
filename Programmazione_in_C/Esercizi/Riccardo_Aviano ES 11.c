/* Fare la moltiplicazione di due numeri inseriti con la somma successione */

#include <stdio.h>

int main()
{
    int numero, numero2, i;
    int prodotto = 0;
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    if (numero2 > 0)
    {
        for (i = 0; i < numero2; i++)
    {
        prodotto = numero + prodotto;
    }
    }
    
    else if(numero 2 < 0)
    {
        numero2 = (numero2 * -1); // fabs = valore assoluto
        
        for (i = 0; i < numero2; i++)
        {
            prodotto = numero + prodotto;
        }

        prodotto = prodotto * -1;
    }

    printf("La moltiplicazione tra %d e %d con somme successive vale: %d", numero, numero2, prodotto);

    return 0;
}