/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float precio, total = 0;
    char r;

    do {
        cout << "Precio: ";
        cin >> precio;
        total += precio;
        cout << "Otro producto? (s/n): ";
        cin >> r;
    } while (r == 's');

    cout << "Total: $" << total;
    return 0;
}