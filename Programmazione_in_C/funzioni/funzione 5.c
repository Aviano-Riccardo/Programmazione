/* Inserisci due numeri, l'utente sceglie se dati 2 numeri fare addizione, sottrazione, moltiplicazione e divisione con una funzione, 0
per uscire
*/

#include <stdio.h>

float add(int num, int num2);
float sott(int num, int num2);
void div(float num, float num2);
float mol(int num, int num2);

int main()
{
    int s;
    float num, num2, r;

    printf("Inserisci il primo numero: ");
    scanf("%f", &num);
    printf("Insersci il secondo numero: ");
    scanf("%f", &num2);

    printf("Inserisci un numero cosi' da selezionare la funzione da svolgere (0 = uscire, 1 = aggiungi, 2 = sottrai, 3 = moltiplchi, 4 = dividi): ");
    scanf("%d", &s);

    if (s == 0)
    {
        printf("La calcolatrice si sta spegnendo");
        return 0;
    }

    else if (s == 1)
    {
        r = add(num, num2);
        printf("La somma di %.2f e di %.2f vale: %.2f", num, num2, r);
    }

    else if (s == 2)
    {
        r = sott(num, num2);
        printf("La sottrazione di %.2f e di %.2f vale: %.2f", num, num2, r);
    }

    else if (s == 3)
    {
        r = mol(num, num2);
        printf("La moltiplicazione di %.2f e di %.2f vale: %.2f", num, num2, r);
    }

    else if (s == 4)
    {
        div(num, num2);
    }

    return 0;
}

float add(int num, int num2)
{
   
    return  num + num2;
}

float sott(int num, int num2)
{
   return num - num2;
}

float mol(int num, int num2)
{
    return num * num2;
}

void div(float num, float num2)
{
    if (num == 0 && num2 == 0)
    {
        printf("Indeterminata");
    }

    else if(num != 0 && num2 == 0)
    {
        printf("Impossibile");
    }

    else if (num != 0 && num2 != 0)
    {
        printf("La divisione tra %.2f e %.2f vale: %.2f", num, num2, (num / num2));
    }
    
    else if (num == 0 && num2 != 0)
    {
        printf("La divisione tra %.2f e %.2f vale: %.2f", num, num2, (num / num2));
    }
}