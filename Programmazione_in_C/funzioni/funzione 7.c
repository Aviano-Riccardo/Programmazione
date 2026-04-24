#include <stdio.h>

int valoreassoluto(int numero);

int main()
{
    int numero, valore;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    valore = valoreassoluto(numero);

    printf("Il valore assoluto di %d vale: %d", numero, valore);

    return 0;
}

int valoreassoluto(int numero)
{
    if (numero < 0)
    {
        return -numero;
    }
    else
    {
        return numero;
    }
}