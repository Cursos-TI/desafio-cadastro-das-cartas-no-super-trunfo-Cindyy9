#include <stdio.h>

int main() {
    printf ("Super trunfo! \n");

    char Nome[50];
   float area;
    int turismo;
    float PIB;
    char codigo[10];
    
    printf("Digite o nome da cidade: \n");
    fgets(Nome, sizeof(Nome), stdin);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turismo);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);

     printf("Nome da cidade: %s", Nome);
     printf("Área: %.2f km²\n", area);
    printf("Número de pontos turísticos: %d\n", turismo);
    printf("Número do PIB: %f\n", PIB);
    printf("Código da cidade: %s", codigo);
    

    return 0;

}




