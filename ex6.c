#include <stdio.h>

#define TOTAL_TERMOS 30

int main() {
    long long int termo1 = 1, termo2 = 1, proximo;
    int i;

    printf("Série de Fibonacci (%d primeiros termos):\n", TOTAL_TERMOS);
    printf("%lld, %lld", termo1, termo2);

    for (i = 3; i <= TOTAL_TERMOS; i++) {
        proximo = termo1 + termo2;
        printf(", %lld", proximo);
        termo1 = termo2;
        termo2 = proximo;
    }

    printf("\n");

    return 0;
}

