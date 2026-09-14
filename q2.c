#include <stdio.h>

int main(){
    int n, x1, x2, xn, soma;

    do{
        puts("Digite o valor de n (maior que 2):");
        scanf("%d", &n);

        if (n < 3) puts("Valor inválido.");
    } while (n < 3);
    
    for (int i = 2; i < n; i++){
        if (i == 2){
            puts("Digite os valores de X1 e X2:");
            scanf("%d %d", &x1, &x2);
            soma = x1 + x2;
        }

        printf("Digite o valor de X%d\n", i + 1);
        scanf("%d", &xn);

        soma += xn;

        printf("Y%d: %.2f\n", i, (float) soma / 3);

        soma -= x1;
        x1 = x2;
        x2 = xn;
    }

    return 0;
}