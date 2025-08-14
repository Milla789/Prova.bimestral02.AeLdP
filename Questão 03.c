#include <stdio.h>

int main() {
    int quantidade, numero;
    int maior, contador_do_maior = 0;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);

        if (i == 0) { 
            maior = numero;
            contador_do_maior = 1;
        } 
        else if (numero > maior) { 
            maior = numero;
            contador_do_maior = 1; 
        } 
        else if (numero == maior) { 
            contador_do_maior++;
        }
    }

    printf("\nMaior numero: %d", maior);
    printf("\nQuantidade de vezes que o maior numero foi lido: %d\n", contador_do_maior);

    return 0;
}
