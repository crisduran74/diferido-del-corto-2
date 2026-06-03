#include <iostream>
using namespace std;

float n1,n2,n3,m,divi,mult;
int op;

main () {
cout<<"Bienvenido al programa\n";
cout<<"Si desea realizar una multiplicacion ingrese 1\n";
cout<<"Si desea realizar una division ingrese 2\n";
cout<<"si desea realizar una conversion de kilometros a metros ingrese 3\n";
cin>>op;

switch (op)
{
case 1:
    cout<<"Ingrese un numero: ";
    cin>>n1;
    cout<<"Ingrese otro numero: ";
    cin>>n2;
    cout<<"Ingrese otro numero: ";
    cin>>n3;

    mult=n1*n2*n3;

    cout<<mult;
    break;
case 2:
cout<<"Ingrese un numero: ";
    cin>>n1;
    cout<<"Ingrese otro numero: ";
    cin>>n2;

    if (n2=0)
    {
        cout<<"Error matematico, no se puede realizar la division entre 0\n";
    }
    else
    divi=n1/n2;

    cout<<divi;
break;
case 3:
cout<<"Ingrese los kilometros a convertir\n";
cin>>n1;

m=n1*1000;

cout<<m;
break;
default:
cout<<"Valor ingresado no valido";
    break;
}

    return 0;
}