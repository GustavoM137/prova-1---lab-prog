#include <stdio.h>

int main(void) {
    int R, G, B, M;
    scanf("%d %d %d %d", &R, &G, &B, &M);

    int bit2 = (M >> 2) & 1;
    int bit1 = (M >> 1) & 1;
    int bit0 = M & 1;

    R = (R & ~1) | bit2;
    G = (G & ~1) | bit1;
    B = (B & ~1) | bit0;

    printf("%d %d %d\n", R, G, B);

    return 0;
}