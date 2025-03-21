#include <stdio.h>  // Biblioteca para printf e scanf

struct Carta {
    char estado[50];
    int codigo;
    char nomeCidade[50];
    long long populacao;
    double area;
    long long PIB;
    int pontosTuristicos;
};

void cadastrarCarta(struct Carta *carta) {
    printf("Digite o estado: ");
    scanf("%s", carta->estado);
    printf("Digite o código da carta: ");
    scanf("%d", &carta->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->nomeCidade);
    printf("Digite a população: ");
    scanf("%lld", &carta->populacao);
    printf("Digite a área (em km²): ");
    scanf("%lf", &carta->area);
    printf("Digite o PIB: ");
    scanf("%lld", &carta->PIB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(const struct Carta *carta) {
    printf("Estado: %s\n", carta->estado);
    printf("Código da Carta: %d\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("População: %lld\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %lld\n", carta->PIB);
    printf("Pontos Turísticos: %d\n", carta->pontosTuristicos);
}

void compararCartas(const struct Carta *carta1, const struct Carta *carta2) {
    printf("\nComparando as cartas com base na população:\n");
    if (carta1->populacao > carta2->populacao) {
        printf("A carta de %s vence!\n", carta1->nomeCidade);
    } else if (carta1->populacao < carta2->populacao) {
        printf("A carta de %s vence!\n", carta2->nomeCidade);
    } else {
        printf("As cartas têm a mesma população. É um empate!\n");
    }
}

int main() {
    struct Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    cadastrarCarta(&carta1);
    printf("\nCadastro da segunda carta:\n");
    cadastrarCarta(&carta2);

    printf("\nDados da primeira carta:\n");
    exibirCarta(&carta1);
    printf("\nDados da segunda carta:\n");
    exibirCarta(&carta2);

    compararCartas(&carta1, &carta2);

    return 0;
}