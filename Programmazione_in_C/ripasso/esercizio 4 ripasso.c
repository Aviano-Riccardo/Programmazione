/* Chiedere all'utente di inserire un valorie creare le funzioni che restituisce il fattoriale di n, la radice quadrata di n
aggiungere un secondo valore m e creare la funzione che calcola la divisione fra n e m*/
#include <stdio.h>
#include <math.h>

float input();
int fattoriale(int numero);
float radice(float numero);
float div();

int main()
{
    float n, m;

    n = input();
    m = input();

    int num = (int) n;

    int fat;

    fat = fattoriale(num);
    printf("Il fattoriale di %d vale %d", num, fat);

    float radice;

    radice = float radice(n);

    printf("La radice quadrata di %.2f vale %.2f", n, radice);

    float divisione;

    divisione = float div();
    printf("La divisione fra %.2f e %.2f vale: %.2f", n, m, divisione);

    return 0;
}

float input()
{
    float num;
    printf("Inserisci un valore: ");
    scanf("%f", &num);

    return num;
}

int fattoriale(int numero)
{
    int fatt = 1;

    for (int i = 1; i <= numero; i++)
    {
        fatt = fatt * i;
    }

    return fatt;
}

float radice (float numero)
{
    int rad;

    rad = sqrt(numero);

    return rad;
}

float div(float numero, float mumero)
{
    int div;

    div = numero / mumero;

    return div;
}