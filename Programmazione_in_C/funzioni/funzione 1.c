#include <stdio.h>

int calcolaCubo(int num); // Prototipo della funzione, termina con il ;
// Ci deve essere se creo la funzione dopo il main
int main()
{
    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    int cubo = calcolaCubo(num);
    printf("Il cubo di %d vale: %d", num, cubo);

    return 0;
}

int calcolaCubo(int num) // Funzione che riceve in ingresso un numero intero
{
    return num * num * num;
}