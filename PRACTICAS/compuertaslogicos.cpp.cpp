/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

inline int AND(int a,int b){return a&&b;}
inline int OR(int a,int b){return a||b;}
inline int NOT(int a){return !a;}
inline int NAND(int a,int b){return !(a&&b);}
inline int NOR(int a,int b){return !(a||b);}
inline int XOR(int a,int b){return a!=b;}
inline int XNOR(int a,int b){return a==b;}
inline int Buffer(int a){return a;}

int main(){
    int o,a,b=0,r;
    cout<<"1.AND 2.OR 3.NOT 4.NAND\n";
    cout<<"5.NOR 6.XOR 7.XNOR 8.Buffer\n";
    cout<<"Elige una compuerta: ";
    if(!(cin>>o)||o<1||o>8)return cout<<"Opcion invalida",0;

    cout<<"Ingresa a (0 o 1): ";
    if(!(cin>>a)||a<0||a>1)return cout<<"Entrada invalida",0;

    if(o!=3&&o!=8){
        cout<<"Ingresa b (0 o 1): ";
        if(!(cin>>b)||b<0||b>1)return cout<<"Entrada invalida",0;
    }

    switch(o){
        case 1:r=AND(a,b);break;
        case 2:r=OR(a,b);break;
        case 3:r=NOT(a);break;
        case 4:r=NAND(a,b);break;
        case 5:r=NOR(a,b);break;
        case 6:r=XOR(a,b);break;
        case 7:r=XNOR(a,b);break;
        case 8:r=Buffer(a);break;
    }

    cout<<"Resultado: "<<r;
    return 0;
}