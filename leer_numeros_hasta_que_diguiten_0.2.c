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
    int numero, sumaPrimos = 0, cantidadPrimos = 0;

    //toca  solicitar al usuario que ingrese números hasta que se ingrese 0 aqui ya entendi la pregunta
    printf("Ingrese numeros (0 para terminar):\n");

    do {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            // Verificar si el número es primo
            if (esPrimo(numero)) {
                sumaPrimos += numero;
                cantidadPrimos++;
            }
        }
    } while (numero != 0);

