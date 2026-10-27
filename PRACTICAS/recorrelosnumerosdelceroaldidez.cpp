/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int n1, mp, tb;

    // Solicita el numero de la tabla
    cout << "Ingresa el numero del que deseas la tabla de multiplicar" << endl;
    cin >> n1;

    // Solicita el limite de la tabla
    cout << "¿Cual deberia de ser el limite de la tabla?" << endl;
    cin >> mp;

    // Recorre la tabla hasta el limite indicado
    for(tb=0; tb<=mp; tb++){

        // Imprime la multiplicacion y su resultado
        cout << n1 << " x " << tb << " = " << n1 * tb << endl;
    }

    return 0;
}