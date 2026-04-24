#include <stdio.h>

int main()
{
    printf("Inserisci la tua eta': \n");
    int eta;
    scanf("%d", &eta);
    printf("Inserisci ora il tuo peso in kg: \n");
    float peso;
    scanf("%f", &peso);
    printf("Inserisci ora la tua altezza in cm: \n");
    float h;
    scanf("%f", &h);
    printf("Inserisci l'iniziale del tuo nome: \n");
    char nome;
    scanf(" %c", &nome);

    printf("Hai %d anni, pesi %f kg, sei alto %f cm e l'iniziale del tuo nome e' %c", eta, peso, h, nome);

    return 0;
}