#include <stdio.h>
#include <stdbool.h>


bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero, sumaDigitos = 0;


    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    int tempNumero = numero;
    while (tempNumero != 0) {
        sumaDigitos += tempNumero % 10;
        tempNumero /= 10;
    }

    if (esPrimo(sumaDigitos)) {
        printf("La suma de los digitos %d es un numero primo.\n", sumaDigitos);
    } else {
        printf("La suma de los digitos %d no es un numero primo.\n", sumaDigitos);
    }

    return 0;
}
