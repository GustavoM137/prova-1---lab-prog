#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    int parar = 0;

    while (!parar) {
        scanf("%d", &numero);

        if (numero == -1) {
            parar = 1;
        } else if (numero < 0) {
            // ignora, não faz nada
        } else if (numero > 255) {
            // ignora, não faz nada
        } else {
            soma += numero;
            contador++;
        }
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);
    return 0;
}