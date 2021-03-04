/*1.3.9 Napisz program kalkulator, który wykonuje wybran¹ przez u¿ytkownika operacj¹ arytmetyczn¹ na dwóch wczytanych liczbach. Program
powinien wczytywaæ dane ze standardowego wejœcia i wypisywaæ wynik na standardowym wyjœciu.*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, wynik;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin>>a;
    char znak;
    cout << "Podaj symbol dzialania ktore chcesz wykonac, sposrod: +, -, *, /, %: " << endl;
    cin>>znak;
    cout << "Podaj druga liczbe: " << endl;
    cin>>b;
    if (znak =='+')
    {
        wynik = a+b;
        cout<<"Wynik: "<<wynik;
        return 0;
    }
    if (znak =='-')
    {
        wynik = a-b;
        cout<<"Wynik: "<<wynik;
        return 0;
    }
    if (znak =='*')
    {
        wynik = a*b;
        cout<<"Wynik: "<<wynik;
        return 0;
    }
    if (znak =='/')
    {
        wynik = a/b;
        cout<<"Wynik: "<<wynik;
        return 0;
    }
    if (znak =='%')
    {
        wynik = a%b;
        cout<<"Wynik: "<<wynik;
        return 0;
    }
    return 0;
}
