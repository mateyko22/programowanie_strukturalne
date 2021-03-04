//Zadanie 1.3.3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1, liczba2, liczba3;
    printf("Podaj 3 liczby: \n");
    scanf ("%d", &liczba1);
    scanf ("%d", &liczba2);
    scanf ("%d", &liczba3);
    int maks=liczba1;
    if (liczba2>maks)
        maks=liczba2;
    if (liczba3>maks)
        maks=liczba3;
    printf("Najwieksza z liczb: " "%i", maks);
    return 0;
}
