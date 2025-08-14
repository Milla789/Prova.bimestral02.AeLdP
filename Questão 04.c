#include <stdio.h>

int main(void) {
    int velocidade;

    printf("Com que velocidade você costuma dirigir? ");
    scanf("%d", &velocidade);

    if (velocidade > 75) {
        printf("Guarda: Você está indo muito rápido!\n");
    } else {
       if (velocidade > 65) {
     printf("Guarda: Você ultrapassou o limite!\n");
    } else {
       if (velocidade == 55) {
     printf("Guarda: Velocidade permitida (55 km/h)\n");
     } else {
       if (velocidade > 45) {
     printf("Guarda: Dirigindo bem, mas ainda encima do ideal.\n");
    } else {
     printf("Guarda: Você está bem dentro dos limite!\n");
                }
            }
        }
    }

    return 0;
}
