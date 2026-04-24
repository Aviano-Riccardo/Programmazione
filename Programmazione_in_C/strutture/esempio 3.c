#include <stdio.h>
#include <string.h>

struct Libro
{
    char titolo[50];
    char autore[50];
};

int main()
{
    struct Studente s1;
    strcpy(s1.nome, "Mario");
    s1.eta = 20;
    s1.media = 27.5;

    printf("Nome dello studente: %s\n", s1.nome);
    printf("Eta' dello studente: %d\n", s1.eta);
    printf("Media dello studente: %.2f", s1.media);

    return 0;
}