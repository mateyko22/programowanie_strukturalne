//1.3.7 Napisz program, kt�ry wczytuje ze standardowego wej�cia wsp�czynniki r�wnania kwadratowego z jedn� niewiadom� i wypisuje na standardowym wyj�ciu wszystkie rozwi�zania rzeczywiste tego r�wnania
//lub odpowiedni� informacj� w przypadku braku rozwi�za�.
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
