/* L'utente inserisce un anno ed il calcolatore verifica se è bisestile
Se l'utente inserisce un numero minore di 0 il programma termina
(senza ovviamente fare alcuna verifica)
altrimenti al termine della verifica, si ricomincia da capo
Un anno bisestile se è divisibile per 4 ma non per 100, oppure se è divisibile per 400.*/

#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci un anno: ");
    scanf("%d", &anno);

    while(anno > 0)
    {
        if ((anno %4 == 0 && anno %100 != 0) || (anno %400 == 0))
        {
            printf("L'anno %d e' bisestile! ", anno);
        }

        else 
        {
            printf("L'anno %d non e' bisestile! ", anno);
        }

        printf("Inserire un nuovo anno. (inserire un numero <= 0 per finire il programma): ");
        scanf("%d", &anno);
    }

    return 0;
}