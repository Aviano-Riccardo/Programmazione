#include <stdio.h>

int main()
{
    int arr[4] = {3,6,9,12};
    int *p = arr;

    for (int i = 0; i < 4; i ++)
    {
        printf("Il valore attuale corrisponde a: %d\n", *(p + i));
    }
    
    return 0;
}