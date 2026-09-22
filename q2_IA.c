#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    double xPrev, xCurr, xNext;

    scanf("%lf %lf", &xPrev, &xCurr);

    for (int i = 2; i <= n - 1; i++) {
        scanf("%lf", &xNext);

        double y = (xPrev + xCurr + xNext) / 3.0;
        printf("%.2f\n", y);

        xPrev = xCurr;
        xCurr = xNext;
    }

    return 0;
}