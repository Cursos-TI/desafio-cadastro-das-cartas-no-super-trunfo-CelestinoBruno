#include<stdio.h>
#include<locale.h>                    //Utilizada para definir o idioma do programa, sendo necessári alterar para Iso 8859-1.

int main(){
    setlocale(LC_ALL,"Portuguese");   //Utilizado para definir formataçãoo em portugues,corrigindo erros de acentuções.

    char estado1, estado2;
    char codigocarta1[10],codigocarta2[10];
    char cidade1[30],cidade2[30];
    unsigned int populacao1, populacao2;
    unsigned int pontoturisticos1,pontoturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    float poder1, poder2;
    
    
        //dados carta 1 
         printf("\nComplete as informaçõeses a baixo da Carta 1: \n");

         printf("\nDigite um dos 8 estados(representados pelas letras A a H): ");
         scanf(" %c",&estado1);

         printf("Digite o código da carta(letra do estado escolhido, seguida de um número de 01 a 04): ");  //Escrevi dessa forma para um facil entendimento de quem ir? ler.
         scanf("%s",codigocarta1);

         printf("Digite o nome da cidade: ");
         scanf("%s",cidade1);

         printf("Digite o número de habitantes da cidade: ");
         scanf("%u",&populacao1);

         printf("Digite a área da cidade (em km²): ");
         scanf("%f",&area1);

         printf("Digite o PIB (em bilhões de reais): ");
         scanf("%f",&pib1);

         printf("Digite a quantidade de pontos turústicos da cidade: ");
         scanf("%u",&pontoturisticos1);
         printf("\nDados salvos!Preencha novamente com diferentes informaçoes para a carta 2: \n");

        //dados carta 2

             printf("\nDigite um dos 8 estados(representados pelas letras A a H): ");
             scanf(" %c",&estado2);

             printf("Digite o código da carta(letra do estado escolhido, seguida de um número de 01 a 04): ");
             scanf("%s",codigocarta2);

             printf("Digite o nome da cidade: ");
             scanf("%s",cidade2);

             printf("Digite o número de habitantes da cidade: ");
             scanf("%u",&populacao2);

             printf("Digite a área da cidade (em km²): ");
             scanf("%f",&area2);

             printf("Digite o PIB (em bilhões de reais): ");
              scanf("%f",&pib2);

             printf("Digite a quantidade de pontos turústicos da cidade: ");
              scanf("%u",&pontoturisticos2);


        //Leitura dos dados salvos carta 1 
         printf("\nCarta 1:\n");
         printf("\nEstado: %c\n", estado1);
         printf("Código: %s\n", codigocarta1);
         printf("Nome da cidade: %s\n", cidade1);
         printf("População: %u habitantes\n", populacao1);
         printf("Área: %.2f km²\n", area1);
         printf("PIB: %.2f bilhões de reais\n", pib1);
         printf("Número de pontos turústicos: %u\n", pontoturisticos1);

         //Divide a população 1 da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
         densidade1 =(float) populacao1 / area1 ;  
         printf("Densidade Populacional: %.2f hab/km² \n",densidade1);

         //Divide o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
         pibcapita1 =(float) pib1 / populacao1;   
         printf("PIB per Capita: %.2f reais\n",pibcapita1);

         poder1 = populacao1 + area1 + pib1 + pontoturisticos1+ pibcapita1+ densidade1 ;
         printf("Super Poder: %.4f\n", poder1);

        //Leitura dos dados salvos carta 2
         printf("\nCarta 2:\n");
         printf("\nEstado: %c\n", estado2);
         printf("Código: %s\n", codigocarta2);
         printf("Nome da cidade: %s\n", cidade2);
         printf("População: %u habitantes\n", populacao2);
         printf("Área: %.2f km²\n", area2);
         printf("PIB: %.2f bilhões de reais\n", pib2);
         printf("Número de pontos turústicos: %u\n", pontoturisticos2);  
        
         //Divide a população 2 da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
         densidade2 =(float) populacao2 / area2 ;   
         printf("Densidade Populacional:%.2f hab/km² \n",densidade2);

        //Divide o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
         pibcapita2 =(float) pib2 / populacao2;   
         printf("PIB per Capita: %.2f reais \n",pibcapita2);
         
         poder2 = populacao2 + area2 + pib2 + pontoturisticos2 + pibcapita2+ densidade2 ;
         printf("Super Poder: %.4f\n", poder2);

        printf("\n[COMPARAÇÃO DAS CARTAS]\n");
        printf("\nCaso o resultado seja igual a 1, Carta 1 Venceu. Caso seja igual a 0, Carta 2 venceu\n");

        int resultado;
        resultado= populacao1 > populacao2;
        printf("\nPopulação:%d \n",resultado);

        resultado =area1 > area2; 
        printf("Área:%d\n",resultado);

        resultado =pib1 > pib2; 
        printf("PIB:%d\n",resultado);

        resultado =pontoturisticos1 > pontoturisticos2; 
        printf("Pontos Turisticos:%d\n",resultado);

        resultado =densidade1 < densidade2; 
        printf("Densidade Populacional:%d\n",resultado);

        resultado =pibcapita1 > pibcapita2; 
        printf("PIB per Capita:%d\n",resultado);

        resultado =poder1 > poder2; 
        printf("Super Poder:%d\n",resultado);




         return 0;

}
