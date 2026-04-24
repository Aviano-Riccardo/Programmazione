#include <stdio.h>

float input();
float add(float a, float b);
float sott(float a, float b);
float mol(float a, float b);
void div(float a, float b);

int main()
{
    float numero, numero2;

    numero = input();
    numero2 = input();

    float addizione;
    addizione = add(numero, numero2);
    printf("L'addizione tra %.2f e %.2f vale: %.2f\n", numero, numero2, addizione);

    float sottrazione;
    sottrazione = sott(numero, numero2);
    printf("La sottrazione tra %.2f e %.2f vale: %.2f\n", numero, numero2, sottrazione);

    float moltiplicazione;
    moltiplicazione = mol(numero, numero2);
    printf("La moltiplicazione tra %.2f e %.2f vale: %.2f\n", numero, numero2, moltiplicazione);

    div(numero, numero2);

    return 0;
}

float input()
{
    float num;

    printf("Inserisci il primo valore: ");
    scanf("%f", &num);

    return num;
}

float add(float a, float b)
{
    return a + b;
}

float sott(float a, float b)
{
    return a - b;
}

float mol(float a, float b)
{
    return a * b;
}

void div(float a, float b)
{
    if (a == 0 && b == 0)
    {
        printf("Indeterminata");

    }
    else if (a != 0 && b == 0)
    {
        printf("Impossibile");
    }
    else if (a == 0 && b != 0)
    {
        printf("La divisione tra %.2f e %.2f vale: %.2f", a, b, (a / b));
    }
    else if (a != 0 && b != 0)
    {
        printf("La divisione tra %.2f e %.2f vale: %.2f", a, b, (a / b));
    }
}