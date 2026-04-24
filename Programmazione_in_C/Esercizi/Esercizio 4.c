#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int temp; 
    printf("Valori iniziali: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Valori finali a = %d, b = %d\n", a, b);
    return 0;
}