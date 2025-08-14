#include <stdio.h>

int main() {
    int N;
    int numero = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; ; i++) {  
        for (int j = 1; j <= i; j++) {
            if (numero > N) { 
                printf("\n");
                return 0;
            }
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
