/* Inserire una serie di temperature, l'inserimento termina con il valore 100. 
calcolare la media delle temperature inserite, il formato deve essere %.2f, voglio attenzione agli output. Utente seguito passo passo.
Calcolare quanti numeri pari e dispari ci sono
Calcolare la temperatura più alta e quella più bassa */

#include <stdio.h>

int main()
{
    int temp, somma = 0, cont = 0;
    float media;

    printf("Inserire una serie di temperature, per terminare inserisci il valore 100.\n");
    printf("Inserisci un valore (inserire 100 per terminare l'inserimento): ");
    scanf("%d", &temp);

    int max = temp;
    int min = temp;
    int npari = 0, ndispari = 0;

    while(temp != 100)
    {
        printf("Inserisci un valore (inserire 100 per terminare l'inserimento): ");
        scanf("%d", &temp);

        somma = somma + temp;
        cont = cont + 1;

        if (temp %2 == 0)
        {
            npari = npari + 1;
        }

        else 
        {
            ndispari = ndispari + 1;
        }

        if (temp > max)
        {
            max = temp;
        }
        
        else if (temp < min)
        {
            min = temp;
        }
    }

    media = somma / cont;

    printf("Il valore della media delle temperature vale: %.2f\n", media);
    printf("Il valore delle temperature pari vale: %d\n", npari);
    printf("Il valore delle temperature dispari vale: %d\n", ndispari);
    printf("La temperatura massima equivale a: %d\n", max);
    printf("La temperatura minima equivale a: %d", min);

    return 0;

}