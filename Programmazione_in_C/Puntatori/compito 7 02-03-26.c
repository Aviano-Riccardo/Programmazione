#include <stdio.h>

void raddioppia(int *p)
{
    *p = *p * 2;
}

int main()
{
    int a = 7;

    raddioppia(&a);
    
    printf("%d\n", a);

    return 0;
}