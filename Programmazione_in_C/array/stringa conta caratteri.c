#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    // Conta i caratteri fino al carattere null '\0'

    while (str[count] != '\0')
    {
        count ++;
    }

    printf("La stringa contine %d caratteri.", count);

    return 0;
}