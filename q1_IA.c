#include <stdio.h>

int main(void) {
    int R, G, B, M;

    if (scanf("%d %d %d %d", &R, &G, &B, &M) != 4) {
        printf("Entrada invalida\n");
        return 1;
    }

    if (R < 0 || R > 255 || G < 0 || G > 255 || B < 0 || B > 255 || M < 0 || M > 7) {
        printf("Entrada invalida\n");
        return 1;
    }

    int bit2 = (M >> 2) & 1; /* bit mais significativo de M */
    int bit1 = (M >> 1) & 1;
    int bit0 = M & 1;        /* bit menos significativo de M */

    R = (R & ~1) | bit2;
    G = (G & ~1) | bit1;
    B = (B & ~1) | bit0;

    printf("%d %d %d\n", R, G, B);

    return 0;
}
