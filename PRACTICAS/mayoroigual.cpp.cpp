/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " es mayor que " << num2 << endl;
    } else if (num2 > num1) {
        cout << num2 << " es mayor que " << num1 << endl;
    } else {
        cout << "Ambos números son iguales" << endl;
    }

    return 0;
}