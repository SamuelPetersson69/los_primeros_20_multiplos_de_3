#include <stdio.h>

int main() {
    int limite = 8;

    for (int i = 0; i < limite; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}
