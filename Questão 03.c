#include <stdio.h>

int main() {
    int quantidade, numero;
    int maior, contador = 0;

    printf("Quantos numeros você deseja:  ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);

        if (i == 0) { 
            maior = numero;
            contador = 1;
        } 
        else if (numero > maior) { 
            maior = numero;
            contador = 1; 
        } 
        else if (numero == maior) { 
            contador ++;
        }
    }

    printf("\nMaior numero: %d", maior);
    printf("\nQuantidade de vezes que o maior numero foi lido: %d\n", contador );

    return 0;
}
