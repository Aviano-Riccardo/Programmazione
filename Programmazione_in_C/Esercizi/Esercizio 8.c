//Inserisci da tastiera i farenait e voglio in uscita il celsius

#include <stdio.h>

int main()

{
    printf("Inserisci il valore dei gradi in Fahrenheit: \n");

    float F;
    scanf("%f", &F);

    float C = 5 * (F-32) / 9;

    printf("Il valore %.1f F vale: %.1f C.", F, C);

    return 0;
}