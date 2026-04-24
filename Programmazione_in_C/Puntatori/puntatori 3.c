#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    //Accesso:

    printf("%d\n", *p); // 10
    printf("%d\n", *(p+1)); // 20
    printf("%d\n", *(p+2)); // 30
    printf("%d\n", *(p+3)); // 40

    return 0;
}