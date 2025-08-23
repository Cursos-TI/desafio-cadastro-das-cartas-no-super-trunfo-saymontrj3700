#include <stdio.h>
int main(){
//DESAFIO INICIAL CARTAS SUPERTRUNFO
//Criando as variaveis das cartas carta1 

 char   codigo1 [4];
 char   estado1 [20];
 char   cidade1 [20];
 int    populacao1;
 float  area1;
 float   pib1;
 int    pontos1;

//criar entrada de dados 

//informaçoes da carta 1

printf("Cadastro da carta 1 \n");
printf("Digite o codigo da carta1: \n");
scanf("%s",codigo1);

printf("Digite o estado: \n");
scanf("%s",estado1);

printf("Digite a cidade: \n");
scanf("%s", cidade1);

printf("Digite o numero da população: \n");
scanf("%i", &populacao1);

printf("Digite a area: \n");
scanf("%f", &area1);

printf("Digite o pib: \n");
scanf("%f", &pib1);

printf("Digite os pontos turisticos: \n");
scanf("%i" , &pontos1);


//Incluindo tela para, adicionar comandos para visualizar 

printf(" \n ====== Carta cadastrada =====  \n ");


printf("\n Carta1:\n ");

printf("codigo:            %s               \n", codigo1);
printf("Estado:            %s               \n", estado1);
printf("Cidade:            %s               \n", cidade1);
printf("Populaçao:         %i de habitantes \n", populacao1);
printf("Area :             %f km²           \n", area1);
printf("Pib:               %f milhoes       \n", pib1);
printf("Pontos turisticos: %i               \n", pontos1);

// inserir variaveis da carta 2

 char     codigo2 [4];
 char     estado2 [20];
 char     cidade2 [20];
 int      populacao2;
 float    area2;
 float    pib2;
 int      pontos2;

// cadastro das  da carta 2

printf("Cadastro da carta 2 \n");
printf("Digite o codigo da carta1: \n");
scanf("%s",codigo2);

printf("Digite o estado: \n");
scanf("%s", estado2);

printf("Digite a cidade: \n");
scanf("%s", cidade2);

printf("Digite o numero da populacao: \n");
scanf("%i", &populacao2);

printf("Digite a area: \n");
scanf("%f", &area2);

printf("Digite o pib: \n");
scanf("%f", &pib2);

printf("Digite os pontos turisticos: \n");
scanf("%i" , &pontos2);


//Incluindo tela para, adicionar comandos para visualizar 

printf(" ====== Carta cadastrada 2 =====  \n ");


printf("\n Carta2:\n ");

printf("codigo:            %s               \n", codigo2);
printf("Estado:            %s               \n", estado2);
printf("Cidade:            %s               \n", cidade2);
printf("Populaçao:         %i de habitantes \n", populacao2);
printf("Area :             %f km²           \n", area2);
printf("Pib:               %f milhoes       \n", pib2);
printf("Pontos turisticos: %i               \n", pontos2);
}
