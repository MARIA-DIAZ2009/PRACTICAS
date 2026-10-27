/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    cout << "Ingresa el tercer número: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " es el mayor" << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " es el mayor" << endl;
    } else {
        cout << num3 << " es el mayor" << endl;
    }

    return 0;
}