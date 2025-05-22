//Exercicio 2: faça um programa que calcule a soma dos numeros impares entre 25 e 525


#include <stdio.h>
int main() {
    int soma = 0; 

    for (int i = 25; i <= 525; i++) {
        if (i % 2 != 0) { 
            soma += i;
        }
    }

    printf ("A soma dos numeros impares entre 25 e 525 é: %d\n",  soma);

    return 0;
}
