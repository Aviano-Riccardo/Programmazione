#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("Stringa al contrario: ");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}