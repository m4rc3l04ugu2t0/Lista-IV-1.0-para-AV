 #include <stdio.h>

#define TOTAL_PESSOAS 20
#define TAM_NOME 100

int main() {
    char nomes[TOTAL_PESSOAS][TAM_NOME];
    int idades[TOTAL_PESSOAS];
    float salarios[TOTAL_PESSOAS];

    for (int i = 0; i < TOTAL_PESSOAS; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Salário: ");
        scanf("%f", &salarios[i]);
    }

    
    printf("\nPessoas com salário maior que R$ 2000,00:\n");
    for (int i = 0; i < TOTAL_PESSOAS; i++) {
        if (salarios[i] > 2000.0) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
