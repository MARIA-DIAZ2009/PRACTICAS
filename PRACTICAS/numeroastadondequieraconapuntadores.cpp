/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    cout << "El valor de a es: " << a << endl;
    cout << "a esta en: " << p1 << endl;
    cout << "El valor de b es: " << b << endl;
    cout << "b esta en: " << p2 << endl;

    return 0;
}