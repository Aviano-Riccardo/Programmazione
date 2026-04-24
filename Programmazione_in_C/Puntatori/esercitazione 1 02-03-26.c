#include <stdio.h>
#include <math.h>

double soluzioni(double a, double b, double c, double *x1, double *x2);

int main()
{
    double a, b, c;

    printf("Inserisci i valori dei coefficienti: ");
    scanf("%2.f", &a);

    return 0;
}

double soluzioni(double a, double b, double c, double *x1, double *x2)
{
    float delta = b*b - 4 * (a) * (c);
    int soluzioniReali = 0;

    if (delta > 0 || delta == 0)
    {
        x1 = -b - sqrt(delta) / 2 * a;
        x2 = -b + sqrt(delta) / 2 * a;
        soluzioniReali = 1;
    }

    return soluzioniReali;
}