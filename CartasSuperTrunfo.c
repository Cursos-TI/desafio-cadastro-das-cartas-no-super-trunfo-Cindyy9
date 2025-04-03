#include <stdio.h>

int main() {
    printf ("Super trunfo! \n");

    char cidade[50];
   float area;
    int turismo;
    double PIB, populacao;;
    char codigo[10];

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a área: \n");
    scanf("%f", &area);
    
    printf("Digite a população da cidade: \n");
    scanf("%lf", &populacao);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turismo);

    printf("Digite o PIB:\n");
    scanf("%lf", &PIB);
    
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Área: %.2f km²\n", area);
    printf("Número de pontos turísticos: %d\n", turismo);
    printf("População: %lf \n", populacao);
    printf("Número do PIB: %lf\n", PIB);


   
    char cidade2[20], codigo2[10];
    int turismo2;
    float area2;
    double populacao2, PIB2;

    printf("\nDigite o código: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite a população da cidade: \n");
    scanf("%lf", &populacao2);

    printf("Digite quantos pontos turísticos tem essa cidade: \n");
    scanf("%d", &turismo2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB2);

    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Área: %.2f km² - População: %lf \n", area2, populacao2);
    printf("Pontos turísticos: %d - PIB: %lf \n", turismo2, PIB2);

    int pontos1 = 0, pontos2 = 0;

    if (area > area2)
    {
        printf("\n A área é maior!\n");
        pontos1++;
    } else {
        printf("A área é menor!\n");
        pontos2++;
    }

    if (turismo > turismo2)
    {
        printf("A tem mais pontos tuíristicos!\n");
        pontos1++;
    } else {
        printf("Tem menos pontos turísticos!\n");
        pontos2++;
    }
if (populacao < populacao2)
    {
        printf("Tem menos populções!\n");
        pontos1++;
    } else {
        printf("Tem menos populações!\n");
        pontos2++;
    }

if (PIB > PIB2)
{
    printf("O PIB é maior!\n");
    pontos1++;

}   else{
    printf("O PIB é menor!\n");
    pontos2++;
}
    

    printf("\n=====RESULTADO FINAL=====\n");
if (pontos1 > pontos2) {
    printf("%s é a cidade vencedora!\n", cidade);
} else if (pontos2 > pontos1) {
    printf("%s é a cidade vencedora!\n", cidade2);
} else {
    printf("Empate entre %s e %s!\n", cidade, cidade2);
}

    return 0;
}