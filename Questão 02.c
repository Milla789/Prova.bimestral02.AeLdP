#include <stdio.h>

int main() {
    int N;
    int numero = 1; 
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) { 
        for (int j = 1; j <= i; j++) { 
            printf("%d ", numero);
            numero++; 
        }
        printf("\n");
    }

    return 0;
}
