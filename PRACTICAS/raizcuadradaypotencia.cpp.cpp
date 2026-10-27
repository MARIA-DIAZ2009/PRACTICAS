/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operador;
    int opcion;

    cout << "=== CALCULADORA ===" << endl;
    cout << "1. Suma (+)" << endl;
    cout << "2. Resta (-)" << endl;
    cout << "3. Multiplicación (*)" << endl;
    cout << "4. División (/)" << endl;
    cout << "5. Potencia (^)" << endl;
    cout << "6. Raíz cuadrada (√)" << endl;
    cout << "Elige una opción (1-6): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            break;
        case 6:
            cout << "Ingresa el número: ";
            cin >> num1;
            break;
        default:
            cout << "Opción no válida" << endl;
            return 0;
    }

    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: no se puede dividir entre 0" << endl;
            }
            break;
        case 5:
            resultado = pow(num1, num2);
            cout << num1 << " elevado a " << num2 << " = " << resultado << endl;
            break;
        case 6:
            if (num1 >= 0) {
                resultado = sqrt(num1);
                cout << "Raíz cuadrada de " << num1 << " = " << resultado << endl;
            } else {
                cout << "Error: no se puede calcular la raíz cuadrada de un número negativo" << endl;
            }
            break;
    }

    return 0;
}