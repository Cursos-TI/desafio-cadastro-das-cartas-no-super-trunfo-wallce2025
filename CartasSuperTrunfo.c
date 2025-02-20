#include <stdio.h>

int main() {
    char Estado[10];
    char carta[5];
    char cidade[10];
    int populacao;
    float area;
    float PIB;
    int pontos,turisticos;

    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado);

    printf("Digite o numero da carta: \n");
    scanf("%s", &carta);

    printf("Digite o numero da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao);

    printf("Digite o numero da Area: \n");
    scanf("%f", &area);

    printf("Digite o numero do PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o Número de turista: \n");
    scanf("%d", &pontos,&turisticos);

    printf("Nome do estado: %s\n   Carta: %s\n", Estado, carta);
    printf("Nome da Cidade: %s\n", cidade);

    printf("Tamanho da area: %f\n   PIB: %f\n", area, PIB);
    printf("Números de pontos turisticos: %d\n  População: %d\n", pontos,turisticos, populacao);

    return 0;
}
