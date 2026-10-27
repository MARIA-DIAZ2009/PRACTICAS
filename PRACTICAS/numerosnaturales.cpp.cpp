/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int cantidad;

    cout << "¿Cuantos numeros naturales quieres?: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << i << endl;
    }

    return 0;
}