#include <stdio.h>

int main()

{
    printf("Inserisci tre numeri interi e il programma individuera' il maggiore e il minore. \n");

    printf("Inserisci il primo numero: \n");
    int a;
    scanf("%d", &a);

    printf("Inserisci il secondo numero: \n");
    int b;
    scanf("%d", &b);

    printf("Inserisci il terzo numero: \n");
    int c;
    scanf("%d", &c);

    int min = a;
    int mag = a;

    if(b > a && b > c)

    {
       mag = b;
    }

    else if(c > a && c > b)

    {
        mag = c;

    }

    if(b < a && b < c)

    {
        min = b;
    }

    else if(c < b && c < a)
    
    {
        min = c; 
    }

    printf("Il valore %d e' il maggiore.", mag);
    printf("Il valore %d e' il minore.", min);

    return 0;
}