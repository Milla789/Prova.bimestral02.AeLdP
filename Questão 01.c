#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Escolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Resto da divisao\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            resultado = num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
            break;
        case 5:
            printf("Resto da divisao inteira: %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
