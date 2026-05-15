#include <stdio.h>

void matrice();
void scambio();

int main()
{
    matrice();
    scambio();

    return 0;
}

void matrice()
{
    printf("===MENU MATRICE===\n");

    int minMat = 10;
    int maxMat = 20;
    int n;
    int m;

    printf("Inserisci la dimensione delle righe della matrice: ");
    scanf("%d", &n);
    while (n < 10)
    
}