#include <stdio.h>

#define N 5

struct Studente
{
    char nome[30];
    int eta;
    float media;
};

int main()
{
    printf("===MENU STUDENTI===\n");
    
    struct Studente sn[100];

    for (int i = 0; i < N; i++)
    {
        printf("Nome: ");
        scanf("%s", sn[i].nome);

        printf("Eta': ");
        scanf("%d", sn[i].eta);

        printf("Media: ");
        scanf("%f", sn[i].media);
    }

    for (int i = 0; i < N; i++)
    {
        printf("Nome: %s", sn[i].nome);
        printf("Eta: %d", sn[i].eta);
        printf("Media: %.2f", sn[i].media);
    }
    

    char mediaNome = sn[0].nome;
    int mediaEta = sn[0].eta;
    float media  = sn[0].media; 

    for (int i = 0; i < N; i++)
    {        
        if (media < sn->media)
        {
            media = sn[i].media;
            mediaNome = sn[i].nome;
            mediaEta = sn[i].eta;
        }
    }

    printf("===STUDENTE CON MEDIA MAGGIORE===\n");

    printf("Nome: %s", mediaNome);
    printf("Eta': %d", mediaEta);
    printf("Media: %.2f", media);

    return 0;
}