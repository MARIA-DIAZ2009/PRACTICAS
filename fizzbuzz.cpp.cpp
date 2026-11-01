/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            cout << "Fizz" << endl;
        } else {
            cout << "Buzz" << endl;
        }
    }

    return 0;
}