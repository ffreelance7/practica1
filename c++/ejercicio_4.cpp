#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout<<"ingrese el 1° numero"<<endl;
    cin>>a;
    cout<<"ingrese el 2° numero"<<endl;
    cin>>b;
    cout<<"ingrese el 3° numero"<<endl;
    cin>>c;
    if(a>b&& b>c){
        cout<<"el mayor es : "<<a<<endl;
    }else{
        if(b>a&& b>c){
            cout<<"el mayor es : "<<b<<endl;
        }else{
            cout<<"el mayor es : "<<c<<endl;
        }
    }

    return 0;
}
