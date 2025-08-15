#include <stdio.h>

int main() {
    float velocidade;

    printf("Qual a velocidade em que vc costuma dirigir? ");
    scanf("%f", &velocidade);

    if (velocidade > 75) {
        printf("Guarda: Você esta muito acima do limite!!\n");
    } else if (velocidade > 65) {
        printf("Guarda: Você esta acima do limite!!\n");
    } else if (velocidade > 55) {
        printf("Guarda: Velocidade um pouco alta, cuidado no trânsito!!\n");
    } else if (velocidade > 45) {
        printf("Guarda: Velocidade no limite, parabens.\n");
    } else {
        printf("Guarda: Voce esta abaixo do limite, pode acelerar um pouquinhoo\n");
    }

    return 0;
}
