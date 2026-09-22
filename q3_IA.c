#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int pixel, xmin, xmax;

    scanf("%d", &pixel);
    xmin = xmax = pixel;

    for (int i = 2; i <= n; i++) {
        scanf("%d", &pixel);
        if (pixel < xmin)
            xmin = pixel;
        if (pixel > xmax)
            xmax = pixel;
    }

    int x;
    scanf("%d", &x);

    double xLinha = (double)(x - xmin) / (xmax - xmin);

    printf("%d %d\n", xmin, xmax);
    printf("%.2f\n", xLinha);

    return 0;
}