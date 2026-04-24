#include <stdio.h>

void min(int num, int num2);
void max(int num, int num2);

int main()
{
    int num, num2;

    printf("Inserisci un numero: ");
    scanf("%d", &num);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    max(num, num2);
    min(num, num2);

    return 0;
}

void min(int num, int num2)
{
    if (num < num2)
    {
        printf("Il numero minore tra %d e %d vale: %d \n", num, num2, num);
    }

    else 
    {
        printf("Il numero minore tra %d e %d vale: %d \n", num, num2, num2);
    }
}

void max(int num, int num2)
{
    if (num > num2)
    {
        printf("Il numero maggiore tra %d e %d vale: %d \n", num, num2, num);
    }

    else 
    {
        printf("Il numero maggiore tra %d e %d vale: %d \n", num, num2, num2);
    }
}