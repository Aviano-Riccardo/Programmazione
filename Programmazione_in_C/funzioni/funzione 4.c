#include <stdio.h>

int calcolaFattoriale(int num);

int main()
{
    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    while (num < 0)
    {
        printf("Inserisci un numero maggiore di 0: ");
        scanf("%d", &num);
    }
    
    int fatt = calcolaFattoriale(num);

    printf("Il fattoriale di %d vale: %d", num, fatt);

    return 0;
}

int calcolaFattoriale(int num)
{
    int fattoriale = 1;

    for (int i = 1; i <= num; i++)
    {
        fattoriale = fattoriale * i;
    }

    return fattoriale;
}