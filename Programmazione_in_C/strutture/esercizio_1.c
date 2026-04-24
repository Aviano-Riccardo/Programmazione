#include <stdio.h>

struct Studente
{
    char nome[50];
    int eta;
    float media;
};

int main()
{
    struct Studente s1;

    printf("Inserisci il nome dello studente: ");
    scanf("%s", s1.nome);

    printf("Inserisci la sua eta': ");
    scanf("%d", &s1.eta);

    printf("Inserisci la sua media: ");
    scanf("%f", &s1.media);

    printf("Nome dello studente: %s\n", s1.nome);
    printf("Eta' dello studente: %d\n", s1.eta);
    printf("Media dello studente: %.1f", s1.media);

    return 0;
}
