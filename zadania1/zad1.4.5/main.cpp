/*1.4.5 Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu sumê kwadratów liczb od 0 do n, czyli wartoœæ 0
2 + 12 + 32 + ... + n2.*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj nieujemna liczbe calkowita: " << endl;
    int n, wynik, suma;
    cin>>n;
    if (n<0)
    {
        cout<<"Podana liczba jest ujemna!"<<endl;
        return 0;
    }
    int i;
    for (i=1; i<=n; ++i)
    {
        wynik=i*i;
        cout<<wynik<<" ";
        suma+=wynik;
    }
    cout<<"\nSuma: "<<suma;
    return 0;
}
