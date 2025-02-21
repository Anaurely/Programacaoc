#include <stdio.h>

int main(){
    int Turisticos1= 10, Turisticos2= 32,Populacao1 = 364.756, Populacao2 = 2418.00; 
    float Area1 = 9.223, Area2 = 693.442 ,PIB1= 10.956,PIB2= 62.954;    
    char Codigo1[] = "A01", Codigo2[] = "B02", Estado1 = 'A', Estado2 = 'B', Cidade1[50] = "Rio Branco", Cidade2[50] = "Salvador";

    printf("   Carta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d mil habitantes\n", Populacao1);
    printf("Área: %.3f km²\n", Area1);
    printf("PIB: %.1f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Turisticos1);


    printf("   Carta 2 \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d milhões habitantes\n", Populacao2);
    printf("Área: %.3f km²\n", Area2);
    printf("PIB: %.1f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Turisticos2);



       return 0;


}