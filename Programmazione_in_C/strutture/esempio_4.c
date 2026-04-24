#include <stdio.h>
#include <string.h>

struct Studente
{
    char nome[50];
    float voto;
};

void modificaVoto(struct Studente *s)
{
    s->voto = 30;
    strcpy(s->nome, "Luca");
}

int main()
{
   struct Studente s1;
   strcpy(s1.nome, "Marco");

   s1.voto = 25;
   printf("%s %d\n", s1.nome, s1.voto);

   modificaVoto(&s1);
   printf("%s %d\n", s1.nome, s1.voto);

   return 0;
}