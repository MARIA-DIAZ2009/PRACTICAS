/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b, i, s = 0, t;
    cin >> a >> b;

    if (a > b) {
        t = a; a = b; b = t;
    }

    i = a;
    do {
        s += i++;
    } while (i <= b);

    cout << s;
    return 0;
}