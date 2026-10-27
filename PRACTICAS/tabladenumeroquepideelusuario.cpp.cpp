/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int tabla, limite;

    cout << "Ingresa la tabla que deseas: ";
    cin >> tabla;

    cout << "¿Hasta que numero quieres la tabla?: ";
    cin >> limite;

    for (int i = 1; i <= limite; i++) {
        cout << tabla << " x " << i << " = " << tabla * i << endl;
    }

    return 0;
}