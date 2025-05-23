#include <stdio.h>

#define TOTAL_PESSOAS 5

int main() {
    int idades[TOTAL_PESSOAS];
    int i;
    int maior, menor;
    float soma = 0.0, media;

    for (i = 0; i < TOTAL_PESSOAS; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        if (idades[i] < 0) {
            printf("Idade inválida. Tente novamente.\n");
            i--; 
            continue;
        }

        soma += idades[i];

        if (i == 0) {
            maior = menor = idades[i];
        } else {
            if (idades[i] > maior) {
                maior = idades[i];
            }
            if (idades[i] < menor) {
                menor = idades[i];
            }
        }
    }

    media = soma / TOTAL_PESSOAS;

    printf("\nIdade mais velha: %d anos\n", maior);
    printf("Idade mais nova: %d anos\n", menor);
    printf("Média das idades: %.2f anos\n", media);

    return 0;
}

