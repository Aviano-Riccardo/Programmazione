#include <stdio.h>
#include <string.h>

int main()
{
    char frase_input[100];
    char frase_output[100];

    printf("Inserisci una frase: ");
    fgets(frase_input, 100, stdin);

    for (int i = 0; i < strlen(frase_input); i++)
    {
       if (i == 0 || frase_input[i - 1] == ' ') // Se il primo carattere oppure se il carattere precedente è uno spazio
       {
            frase_output[i] = toupper(frase_input[i]);
       }

       else
       {
            frase_output[i] = tolower(frase_input[i]);
       }
    }

    frase_output[strlen(frase_input)] = '\0';
    printf("La frase finale e': %s", frase_output);

    return 0;
}