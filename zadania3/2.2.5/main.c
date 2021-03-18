#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int n)
{
    return pow(2,n);
}
int main()
{
    int n;
    printf("Wprowadz n: ");
    scanf("%d", &n);
    printf("%d", potega(n));
    return 0;
}
