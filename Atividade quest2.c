#include <stdio.h>

int main() {
    int i;

    printf("Numero | Quadrado | Cubo\n");
    printf("-------------------------\n");

    for (i = 0; i <= 10; i++) {
        printf("%d      | %d        | %d\n", i, i * i, i * i * i);
    }

    return 0;
}
