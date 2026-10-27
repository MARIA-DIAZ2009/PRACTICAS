/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " es par" << endl;
    } else {
        cout << numero << " es impar" << endl;
    }

    return 0;
}