#include <iostream>
#define PI 3.141617
using namespace std;

int main()
{
    float radio;
    float areaCir;
    cout << "Ingrese radio" << endl;
    cin >>radio;
    areaCir=PI*(radio^2);
    cout << "El Area del circulo es :"<<areaCir<< endl;

    int lado;
    int areCua;
    cout << "Ingrese radio" << endl;
    cin >>lado;
    areCua=lado^2;
    cout << "El Area del cuadrado  es :"<<areCua<< endl;

    int base;
    int altura;
    int areaRectan;
    cout << "Ingrese base" << endl;
    cin >>base;
    cout << "Ingrese altura" << endl;
    cin >>altura;
    areaRectan=base*altura;
    cout << "El Area del del rectangulo   es :"<<areaRectan<< endl;

    return 0;
}
