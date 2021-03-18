#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int n, int m)
{
    return pow(n,m);
}
int main()
{
    int n, m;
    printf("Wprowadz nieujemne n i m, co najmniej jedna musi byc rozna od 0: ");
    scanf("%d %d", &n, &m);
    if (n<0 || m<0)
    {
        printf("Liczby sa ujemne");
        return 0;
    }
    if (n==0 && m==0)
    {
        printf("Obie sa rowne 0.");
        return 0;
    }
    printf("%d", potega(n, m));
    return 0;
}
