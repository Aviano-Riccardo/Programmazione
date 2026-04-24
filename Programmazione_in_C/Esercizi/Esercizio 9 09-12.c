#include <stdio.h>
#include <string.h>

int main()
{
    char frase_input[100];
    char frase_output[100];
    int j = 0;

    printf("Inserisci una frase: ");
    fgets(frase_input, 100, stdin); // Mi permette di prendere una frase con gli spazi, è più sicura di scanf

    for(int i = 0; i < strlen(frase_input); i++)
    {
        char c = frase_input[i];
        frase_output[j] = c;
        j++; // j = j + 1

        if (c == 'a' ||  c == 'e' || c == 'i' ||  c == 'o' || c == 'u')
        {
            frase_output[j] = 'f';
            j++;
        }

        else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            frase_output[j] = 'F';
            j++;
        }
    }

    frase_output[j] = '\0';

    printf("La frase finale sara': %s", frase_output);

    return 0;
}