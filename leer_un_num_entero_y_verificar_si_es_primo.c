#include <stdio.h>
#include <stdbool.h>

// esta linea tiene la funcion de determinar li es numero primo.,g
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
