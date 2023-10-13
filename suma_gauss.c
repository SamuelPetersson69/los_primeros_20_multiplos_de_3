#include <stdio.h>

int main() {
    int numero, suma = 0;

    //mejor puse las variables completas como en ves de sum suma etc
    // Solicita un numero entero para evitar decimales etc 
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    // esto calcula el resultado
    for (int i = 1; i <= numero; ++i) {
        suma += i;
    }
 // aqui simplemente te imprime la respuesta
    printf("La suma de Gauss hasta %d es: %d\n", numero, suma);



    return 0;
}


