#include <stdio.h>

int main(){
    unsigned char R, G, B, M;

    puts("Digite o valor de R, G e B:");
    scanf("%hhu %hhu %hhu", &R, &G, &B);

    puts("Digite o valor de M (de 0 até 7)");
    scanf("%hhu", &M);

    R = (R & 254) | ((M >> 2) & 1);
    G = (G & 254) | ((M >> 1) & 1);
    B = (B & 254) | (M & 1);

    printf("M: %hhu\n", M & 7);
    printf("Bit 0 de R: %hhu\n", R & 1);
    printf("Bit 0 de G: %hhu\n", G & 1);
    printf("Bit 0 de B: %hhu\n", B & 1);

    return 0;
}