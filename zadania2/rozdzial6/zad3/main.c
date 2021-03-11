#include <stdio.h>
#include <stdlib.h>

int main()
{
    char litera;
    for(int i = 0; i < 6; i++)
    {
        litera='F';
        for(int j = 0; j <= i; j++)
        {
            printf("%c",litera);
            litera--;
        }
        printf("\n");
    }
    return 0;
}
