// 7. Um marciano chegou a uma floresta e se escondeu atrás de uma das 100
// árvores quando viu um caçador. O caçador só tinha cinco balas em sua
// espingarda. Cada vez que ele atirava, e não acertava, é claro, o marciano
// dizia: estou mais para à direita ou mais para à esquerda. Se o caçador não
// conseguir acertar o marciano, ele será levado para Marte. Escreva este jogo
// para dois jogadores, usando a linguagem C, onde um escolhe a árvore em
// que o marciano irá se esconder, e o outro tenta acertar.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void clean_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    setlocale(LC_ALL, "");
    int martian_position, guess, attempts = 5;

    printf("=== Caça ao Marciano ===\n");
    printf("Marciano, escolha uma árvore entre (1 a 100) para se esconder: ");
    scanf("%d", &martian_position);
    clean_screen();

    if (martian_position < 1 || martian_position > 100) {
        printf("Posição inválida, escolha uma entre 1 a 100.\n");
        return 1;
    }

    printf("\nCaçador, você tem 5 balas para tentar acertar o Marciano!\n");

    while (attempts > 0) {
        printf("\nEscolha uma árvore para atirar (1 a 100): ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 100) {
            printf("Árvore inválida, escolha uma entre 1 a 100.\n");
            continue;
        }

        if (guess == martian_position) {
            printf("Você acertou o Marciano! A Terra está segura.\n");
            return 0;
        } else {
            attempts--;
            if (guess < martian_position) {
                printf("Errou! O Marciano está mais para a direita.\n");
            } else {
                printf("Errou! O Marciano está mais para a esquerda.\n");
            }

            if (attempts > 0) {
                printf("Você tem %d tiro(s) restante(s).\n", attempts);
            } else {
                printf("Você não tem mais tiros. O Marciano vai levar você para Marte!\n");
                printf("Ele estava atrás da árvore %d.\n", martian_position);
            }
        }
    }

    return 0;
}

