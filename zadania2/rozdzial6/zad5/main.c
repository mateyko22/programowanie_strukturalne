#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Podaj gorna i dolna granice tabeli: ");
    scanf("%d %d", &a, &b);
    for (int i=a; i<=b; i++)
    {
        printf("%d \t %d \t %d \n", i, i*i, i*i*i);
    }
    return 0;
}
