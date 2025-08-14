#include <stdio.h>

int main(void){
    int x, y, resultado, op = 0;
    float divisao;

    printf("Digite o valor x: \n");
    scanf("%d", &x);
    printf("Digite o valor y: \n");
    scanf("%d", &y);

    do {
        printf("\n---- Calculadora ----\n");
        printf("1 - SOMA\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - MULTIPLICACAO\n");
        printf("4 - DIVISAO\n");
        printf("0 - SAIR\n");
        printf("Escolha: ");
        scanf("%d", &op);
        switch (op) {
            case 1: resultado = x + y; printf("Resultado: %d\n", resultado); break;

            case 2: resultado = x - y; printf("Resultado: %d\n", resultado); break;

            case 3: resultado = x * y; printf("Resultado: %d\n", resultado); break;

            case 4: divisao = (float)x / y; printf("Resultado: %.2f\n", divisao); break;

            case 0: printf("Fim do programa.\n"); break;

            default:
                printf("Escolha um numero das opcoes.\n");
        }
    } while (op != 0);
}