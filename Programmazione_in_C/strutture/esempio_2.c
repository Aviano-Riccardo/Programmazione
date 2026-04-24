#include <stdio.h>
#include <string.h>

struct Auto
{
    char marca[30];
    char modello[30];
    int anno;
    float prezzo;
};

int main()
{
    struct Auto a1;
    strcpy(a1.marca, "Fiat");
    strcpy(a1.modello, "Panda");

    a1.anno = 2020;
    a1.prezzo = 14500.50;

    printf("Marca: %s\n", a1.marca);
    printf("Modello: %s\n", a1.modello);
    printf("Anno: %d\n", a1.anno);
    printf("Prezzo: %.2f\n", a1.prezzo);
    
    return 0;
}