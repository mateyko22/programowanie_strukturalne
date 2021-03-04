//1.3.7 Napisz program, który wczytuje ze standardowego wejœcia wspó³czynniki równania kwadratowego z jedn¹ niewiadom¹ i wypisuje na standardowym wyjœciu wszystkie rozwi¹zania rzeczywiste tego równania
//lub odpowiedni¹ informacjê w przypadku braku rozwi¹zañ.
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    printf("Podaj wspolczynniki rownania kwadratowego ax^2 + bx + c: \n");
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    int delta;
    delta=b*b-4*a*c;
    printf("delta= " "%i", delta );
    return 0;
}
