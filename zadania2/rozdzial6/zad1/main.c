#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[26];
    int i=0;
    char x='a';
    while (x<='z')
    {
        tab[i]=x;
        x++;
        i++;
    }
    for (i=0; i<26; ++i)
        printf("%c ", tab[i]);
    return 0;
}
