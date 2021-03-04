//1.3.7 Napisz program, który wczytuje ze standardowego wejœcia wspó³czynniki równania kwadratowego z jedn¹ niewiadom¹ i wypisuje na standardowym wyjœciu wszystkie rozwi¹zania rzeczywiste tego równania
//lub odpowiedni¹ informacjê w przypadku braku rozwi¹zañ.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Podaj wspolczynniki rownania kwadratowego ax^2 + bx + c: \n");
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    float delta;
    delta=b*b-4*a*c;
    if (delta<0)
    {
        printf("Delta mniejsza od 0. Brak rozwiazan rzeczywistych.");
        return 0;
    }
    float x1, x2, x;
    if (delta>0)
    {
        x1=(-b-sqrt(delta))/(a*2);
        x2=(-b+sqrt(delta))/(a*2);
        printf("x1= " "%f", x1 );
        printf("\nx2= " "%f", x2 );
        return 0;
    }
    else
    {
        x=(-b)/(a*2);
        printf("x= " "%f", x );
        return 0;
    }
    return 0;
}
