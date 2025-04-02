#include<stdio.h>
#include<locale.h>                    //Utilizada para definir o idioma do programa, sendo necessári alterar para Iso 8859-1.

int main(){
    setlocale(LC_ALL,"Portuguese");   //Utilizado para definir formataçãoo em portugues,corrigindo erros de acentuções.

    char estado1, estado2;
    char codigocarta1[10],codigocarta2[10];
    char cidade1[30],cidade2[30];
    int populacao1, populacao2;
    int pontoturisticos1,pontoturisticos2;
    float area1, area2;
    float pib1, pib2;
    
             //dados carta 1 
         printf("\nComplete as informaçõeses a baixo da Carta 1: \n");

         printf("\nDigite um dos 8 estados(representados pelas letras A a H): ");
         scanf(" %c",&estado1);

         printf("Digite o código da carta(letra do estado escolhido, seguida de um n�mero de 01 a 04): ");  //Escrevi dessa forma para um facil entendimento de quem ir� ler.
         scanf("%s",codigocarta1);

         printf("Digite o nome da cidade: ");
         scanf("%s",cidade1);

         printf("Digite o número de habitantes da cidade: ");
         scanf("%d",&populacao1);

         printf("Digite a área da cidade (em km�): ");
         scanf("%f",&area1);

         printf("Digite o PIB (em bilhões de reais): ");
         scanf("%f",&pib1);

         printf("Digite a quantidade de pontos turústicos da cidade: ");
         scanf("%d",&pontoturisticos1);
         printf("\nDados salvos!Preencha novamente com diferentes informaçoes para a carta 2: \n");

          //dados carta 2

             printf("\nDigite um dos 8 estados(representados pelas letras A a H): ");
             scanf(" %c",&estado2);

             printf("Digite o código da carta(letra do estado escolhido, seguida de um número de 01 a 04): ");
             scanf("%s",codigocarta2);

             printf("Digite o nome da cidade: ");
             scanf("%s",cidade2);

             printf("Digite o número de habitantes da cidade: ");
             scanf("%d",&populacao2);

             printf("Digite a área da cidade (em km²): ");
             scanf("%f",&area2);

             printf("Digite o PIB (em bilhões de reais): ");
              scanf("%f",&pib2);

             printf("Digite a quantidade de pontos turústicos da cidade: ");
              scanf("%d",&pontoturisticos2);


            //Leitura dos dados salvos carta 1 
         printf("\nCarta 1:\n");
         printf("\nEstado: %c\n", estado1);
         printf("Código: %s\n", codigocarta1);
         printf("Nome da cidade: %s\n", cidade1);
         printf("População: %d habitantes\n", populacao1);
         printf("Área: %.2f km²\n", area1);
         printf("PIB: %.2f bilhões de reais\n", pib1);
         printf("Número de pontos turústicos: %d\n", pontoturisticos1);
        
           //Leitura dos dados salvos carta 2
         printf("\nCarta 2:\n");
         printf("\nEstado: %c\n", estado2);
         printf("Código: %s\n", codigocarta2);
         printf("Nome da cidade: %s\n", cidade2);
         printf("População: %d habitantes\n", populacao2);
         printf("Área: %.2f km²\n", area2);
         printf("PIB: %.2f bilhões de reais\n", pib2);
         printf("Número de pontos turústicos: %d\n", pontoturisticos2);  
           

         return 0;

}
