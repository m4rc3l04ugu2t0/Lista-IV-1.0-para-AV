#include <stdlib.h>
#include <stdio.h>

void check_ret(int ret) {
    if (ret == 0 || ret == EOF) {
        fprintf(stderr, "Entrada inválida!\n");
        exit(EXIT_FAILURE);
    }
}

int main () {
    int numero; 
    int contador = 0;
    printf("Digite numeros inteiros (Digite o numero 0 para sair): \n");

    while (1) {
        printf("Numero: ");
        check_ret(scanf("%d", &numero));

        if (numero == 0) {
            break;
        }

        if(numero >= 100 && numero <= 200) {
            contador++;
        }
    }

    printf   ("A quantidade de numeros entre 100 e 200 é %d\n", contador);
    return 0;
}
