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

    bool divisiblePor2 = (numero % 2 == 0);
    bool divisiblePor3 = (numero % 3 == 0);

    if (divisiblePor2 && divisiblePor3) {
        cout << numero << " es divisible entre 2 y 3" << endl;
    } else if (divisiblePor2) {
        cout << numero << " es divisible solamente entre 2" << endl;
    } else if (divisiblePor3) {
        cout << numero << " es divisible solamente entre 3" << endl;
    } else {
        cout << numero << " no es divisible ni entre 2 ni entre 3" << endl;
    }

    return 0;
}