
#include <stdio.h>

int main() {
    char nome[50];
    float precoMercado1, precoMercado2;

    printf("Digite o nome do produto: ");
    scanf("%49s", nome);

    printf("Digite o preco no Supermercado 1: ");
    scanf("%f", &precoMercado1);

    printf("Digite o preco no Supermercado 2: ");
    scanf("%f", &precoMercado2);

    printf("\nProduto: %s\n", nome);
    printf("Preco no Supermercado 1: R$ %.2f\n", precoMercado1);
    printf("Preco no Supermercado 2: R$ %.2f\n", precoMercado2);

    return 0;
}