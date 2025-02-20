#include <stdio.h>

int main(){ 
    char Estado[6];
    char Carta[15];
    char Cidade[10];
    int Populacao;
    float Area;
    float PIB;
    int pontos,turisticos;

    printf("Digite o Nome do Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o Número da Carta:\n");
    scanf("%s", &Carta);

    printf("Digite o Nome da Cidade \n");
    scanf("%s", &Cidade);

    printf("digite o Numero da População \n");
    scanf("%d", &Populacao);

    printf("Digite o tamanho da Àrea \n");
    scanf("%f", &Area);

    printf("Digite o Numero do PIB \n");
    scanf("%f", &PIB);

    printf("Digite o Número dos pontos Turisticos \n");
    scanf("%d", &pontos,&turisticos);

    printf("Nome do Estado: %s\n Carta: %s\n", Estado, Carta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Tamanho da Àrea: %f\n PIB: %f\n", Area, PIB);
    printf("Numero da População: %d\n Pontos,turisticos: %d\n", Populacao, pontos,turisticos);


   
    return 0;










}