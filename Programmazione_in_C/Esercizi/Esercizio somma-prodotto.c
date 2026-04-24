#include <stdio.h>

int main() {
    printf("Questo programma legge tre numeri e ne fa la somma e il prodotto. ");
    int num, num2, num3;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);
    printf("La somma dei tre numeri e': %d\n", num + num2 + num3);
    printf("Il prodotto e': %d\n", num * num2 * num3);

}