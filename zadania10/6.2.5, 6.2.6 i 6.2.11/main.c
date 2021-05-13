#include <stdio.h>
#include <stdlib.h>

int*** tworz(int n,int m,int o)
{
    int * tab = malloc(n*sizeof(int**));
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; i < m; j++)
            tab[j] = malloc(o*sizeof(int));
    }
    return tab;
}
void usunzpam(int n, int m, int o, int ***tab)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; i <m; i++)
            free(tab[i]);
        free(tab);
    }
}
int main()
{
    int n = 1;
    int m = 2;
    int o = 3;
    int tab[] = {1, 2, 3, 4};
    tworz(n, m, o);
    usunzpam(n, m, o, tab);
    sumuj(tab, n);
    return 0;
}

int sumuj(int tab[][100], int n)
{
int i, j, suma = 0;
for (i = 0; i < n; i++)
{
    for (j = 0; j < 100; j++)
    {
        suma+=tab[i][j];
    }
}
return suma;
}
int (** alokacja(int n, int m, int o))[]
{
    return malloc(n*m*sizeof(int[o]));
}
void zwolnienie(int n,int m, int tab[][n][m])
{
    free(tab);
}
