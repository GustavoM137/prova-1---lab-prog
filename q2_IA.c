#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 3) {
        printf("Entrada invalida\n");
        return 1;
    }

    float xPrev, xAtual, xProx;

    /* le as duas primeiras amostras */
    if (scanf("%f %f", &xPrev, &xAtual) != 2) {
        printf("Entrada invalida\n");
        return 1;
    }

    /* para cada nova amostra lida, calcula a media da janela anterior */
    for (int i = 2; i <= n - 1; i++) {
        if (scanf("%f", &xProx) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }

        float y = (xPrev + xAtual + xProx) / 3.0f;
        printf("%.2f\n", y);

        /* desliza a janela */
        xPrev = xAtual;
        xAtual = xProx;
    }

    return 0;
}
