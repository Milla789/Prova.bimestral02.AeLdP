#include <stdio.h>

int main() {
    short idade;
    int conta;
    long deposito;

    printf("Digite sua idade: ");
    scanf("%hd", &idade);

    printf("Digite o número da conta: ");
    scanf("%d", &conta); 

    printf("Digite o valor a depositar: ");
    scanf("%ld", &deposito); 

    printf("\nIdade: %hd\nConta: %d\nValor a depositar: %ld\n", idade, conta, deposito);

    return 0;
}
