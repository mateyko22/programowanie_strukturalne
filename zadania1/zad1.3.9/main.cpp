/*1.3.9 Napisz program kalkulator, kt�ry wykonuje wybran� przez u�ytkownika operacj� arytmetyczn� na dw�ch wczytanych liczbach. Program
powinien wczytywa� dane ze standardowego wej�cia i wypisywa� wynik na standardowym wyj�ciu.*/

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
