/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operador;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa un operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    switch (operador) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Error: no se puede dividir entre 0" << endl;
            }
            break;
        default:
            cout << "Operador no válido" << endl;
    }

    return 0;
}