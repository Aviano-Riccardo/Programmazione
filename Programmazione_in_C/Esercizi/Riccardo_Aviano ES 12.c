/* Leggi un numero NUM ed esegui il calcolo della somma dei primi num numeri interi positivi pari */

#include <stdio.h>

int main()

{
    int numero, n_somma, numero2,i;
    int cont = 0;
    int somma = 0;
    printf("Quanti numeri vuoi inserire: ");
    scanf("%d", &numero);
    
    printf("Di quanti numeri positivi pari vuoi fare la somma?\n");
    scanf("%d", &n_somma);

    for (i = 0; i < numero; i++)
    {
        printf("Inserisci un valore: ");
        scanf("%d", &numero2);

        if (numero2 > 0 && numero2 %2 == 0)
        {
            somma = somma + numero2;
            cont = cont + 1;  
        
        }
    }

    printf("La somma dei primi %d valori positivi pari vale: %d", n_somma, somma);

    return 0;
}