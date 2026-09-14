#include <stdio.h>

int main(){
    unsigned char x, min, max;
    int n;

    do{
        puts("Digite a quantidade n de pixels:");
        scanf("%d", &n);

        if (n < 1) puts("Quantidade inválida.");
    } while (n < 1);

    for (int i = 1; i <= n; i++){
        printf("Digite a intensidade x%d:\n", i);
        scanf("%hhu", &x);

        if (i == 1) min = max = x;

        if (x > max) max = x;
        
        if (x < min) min = x;
    }

    if (min == max){
        puts("Não é possível normalizar, x(min) = x(max)");
        
        return 0;
    }

    do{
        printf("Digite o valor de x para ser normalizado, no intervalo [%hhu, %hhu]\n", min, max);
        scanf("%hhu", &x);

        if (x < min || x > max) puts("Valor inválido.");

    } while (x < min || x > max);

    printf("%hhu normalizado: %.2f\n", x, (float) (x - min) / (max - min));

    return 0;
}