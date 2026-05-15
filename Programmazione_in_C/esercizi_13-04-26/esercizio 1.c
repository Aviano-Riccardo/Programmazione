#include <stdio.h>
int main() 
{
  int a = 20;
  int *p = &a;
  
  printf("Il valore di A equivale a: %d\n", a);
  printf("L'indirizzo di A equivale a: %p\n", &a);
  printf("Il valore tramite puntatore vale: %d", *p);

  return 0;
}