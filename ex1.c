// 1. Escreva um programa em C que imprima todos os números de 100 até 1.

#include <stdio.h>
int main  () {
    int numero = 1;

    while (numero <= 100) {
        printf("%d, " , numero); 
        if (numero % 10 == 0) {
            printf("\n");
        }
        numero++;
    }

    return 0;
}
