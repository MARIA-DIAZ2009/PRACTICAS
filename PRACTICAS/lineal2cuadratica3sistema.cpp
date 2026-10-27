7442444411/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
 int op;
 double a,b,c,d,x,y,a2,b2,c2;
 cout<<"1.Lineal 2.Cuadratica 3.Sistema: ";
 cin>>op;

 if(op==1){
  cin>>a>>b;
  if(a!=0) cout<<-b/a;
  else cout<<"Error";
 }
 else if(op==2){
  cin>>a>>b>>c;
  d=b*b-4*a*c;
  if(a!=0 && d>=0)
   cout<<(-b+sqrt(d))/(2*a)<<" "<<(-b-sqrt(d))/(2*a);
  else cout<<"Sin soluciones reales";
 }
 else if(op==3){
  cin>>a>>b>>c>>a2>>b2>>c2;
  d=a*b2-a2*b;
  if(d!=0){
   x=(c*b2-c2*b)/d;
   y=(a*c2-a2*c)/d;
   cout<<x<<" "<<y;
  } else cout<<"Sin solucion unica";
 }
 return 0;
}