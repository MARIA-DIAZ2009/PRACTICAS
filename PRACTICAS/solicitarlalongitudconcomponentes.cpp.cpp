/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;

double perimetro(int n,double l){
    return n*l;
}

double area(double p,double ap){
    return p*ap/2;
}

int main(){
    int n;
    double l,ap,p;

    cout<<"Numero de lados: ";
    cin>>n;
    cout<<"Lado: ";
    cin>>l;
    cout<<"Apotema: ";
    cin>>ap;

    if(n>=3 && l>0 && ap>0){
        p=perimetro(n,l);
        cout<<"Perimetro: "<<p<<endl;
        cout<<"Area: "<<area(p,ap);
    }else cout<<"Datos invalidos";

    return 0;
}