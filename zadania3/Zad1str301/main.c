#include <stdio.h>
#include <stdlib.h>

double min(double x, double y)
{
    if (x>y)
        return x;
    if (y>x)
        return y;
    if (x==y)
        return 0;
}
int main()
{
    double x, y;
    printf("Wprowadz dwie wartosci: \n");
    scanf("%lf %lf", &x, &y);
    printf("Wieksza z tych wartosci: %lf", min(x,y));
    return 0;
}
