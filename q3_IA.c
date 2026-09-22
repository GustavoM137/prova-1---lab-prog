#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada invalida\n");
        return 1;
    }

    int pixel, xmin, xmax;

    if (scanf("%d", &pixel) != 1 || pixel < 0 || pixel > 255) {
        printf("Entrada invalida\n");
        return 1;
    }
    xmin = xmax = pixel;

    for (int i = 1; i < n; i++) {
        if (scanf("%d", &pixel) != 1 || pixel < 0 || pixel > 255) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (pixel < xmin) xmin = pixel;
        if (pixel > xmax) xmax = pixel;
    }

    int x;
    if (scanf("%d", &x) != 1 || x < 0 || x > 255) {
        printf("Entrada invalida\n");
        return 1;
    }

    if (xmax == xmin) {
        printf("Nao e possivel normalizar (xmax = xmin)\n");
        return 1;
    }

    float xLinha = (float)(x - xmin) / (xmax - xmin);
    printf("%.4f\n", xLinha);

    return 0;
}
