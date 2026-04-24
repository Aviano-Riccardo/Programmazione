#include <stdio.h>

int main()
{
    int array[] = {2, 4, 6, 8};
    int *p = array;

    for (int i = 0; i < 4; i ++)
    {
        printf("%d", *(p+i));
    }

    return 0;
}