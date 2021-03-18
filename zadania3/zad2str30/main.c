#include <stdio.h>
#include <stdlib.h>

void rzad_zn(char ch, int i, int j)
{
    for (int x=i; x<=j; x++)
    {
        printf("%c", ch);
    }
}
int main()
{
    char ch;
    int i, j;
    printf("Wprowadz znak: ");
    scanf("%c", &ch);
    printf("Wprowadz i: ");
    scanf("%d", &i);
    printf("Wprowadz j: ");
    scanf("%d", &j);
    rzad_zn(ch, i, j);
    return 0;
}
