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
        char c = frase_input[i];

        if (c == ' ')
        {
            frase_output[i] = '\n';
        }

        else 
        {
            frase_output[i] = frase_input[i];
        }
    }

    frase_output[strlen(frase_input)] = '\0';
    printf("La frase finale e': %s", frase_output);

    return 0;
}