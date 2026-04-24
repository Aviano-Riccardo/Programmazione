#include <stdio.h>

struct Prodotto
{
    char nome[50];
    float prezzo;
};

void aumentaPrezzo(struct Prodotto *p)
{
    p->prezzo = p->prezzo * 1.10; // aumenta del 10%
}

int main()
{
    struct Prodotto prod = {"Pane", 2.50};

    printf("Prezzo prima: %.2f\n", prod.prezzo);

    aumentaPrezzo(&prod.prezzo);
    printf("Prezzo aumentato: %d", prod.prezzo);

    return 0;
}