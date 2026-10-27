/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int numero, signo;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Convertimos el numero a un valor que switch pueda evaluar
    if (numero > 0)
        signo = 1;
    else if (numero == 0)
        signo = 0;
    else
        signo = -1;

    switch (signo) {
        case 1:
            printf("El numero es positivo.\n");
            break;
        case 0:
            printf("El numero es cero.\n");
            break;
        default:
            printf("El numero es negativo.\n");
            break;
    }

    return 0;
}