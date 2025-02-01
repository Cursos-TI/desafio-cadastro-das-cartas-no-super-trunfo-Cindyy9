#include <stdio.h>

int main() {
    
    printf ("Super trunfo! \n");

    char Nome[50], codigo[10], PIB [50];
    float area;
    int turismo;
    
    printf("Digite o nome da cidade: \n");
    fgets(Nome, sizeof(Nome), stdin);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turismo);

    printf("Digite o PIB: \n");
    scanf("%s", &PIB);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: %s", Nome);
    printf("Área: %.2f km²\n", area);
    printf("Número de pontos turísticos: %d\n", turismo);
    printf("Número do PIB: %s\n", PIB);
    printf("Código da cidade: %s", codigo);
    

    return 0;

}



