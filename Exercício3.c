#include<stdio.h>

main(){

/* 3-  Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida.*/

//informação inicial
printf("Calculadora de Calorias");

//variáveis
int prato, sobremesa, bebida, pratoF, sobremesaF, bebidaF, cal;

//entrada dos dados
printf("\n Prato: 1 Vegetariano, 2 Peixe, 3 Frango, 4 Carne.");
printf("\n Informe o prato escolhido:");
scanf("%d", &prato);
printf("\n Sobremesa: 1 Abacaxi, 2 Sorvete diet, 3 Mouse diet, 4 Mouse de chocolate.");
printf("\n Informe a Sobremesa:");
scanf("%d", &sobremesa);
printf("\n Bebida: 1 Cha, 2 Suco de laranja, 3 Suco de melao, 4 Refrigerante diet.");
printf("\n Por fim informe a bebida escolhida:");
scanf("%d", &bebida);

//operações e saída
switch(prato){
    case 1:
    printf("\n Vegetariano 180 calorias");
    pratoF = 180;
    break;

    case 2:
    printf("\n Peixe 230 calorias");
    pratoF = 230;
    break;

    case 3:
    printf("\n Frango 250 calorias");
    pratoF = 250;
    break;

    case 4:
    printf("\n Carne 350 calorias");
    pratoF = 350;
    break;

    default:
    printf("Erro 402");
    printf("\n Voce informou o codigo errado");
} switch(sobremesa){
    case 1:
    printf("\n Abacaxi 75 calorias");
    sobremesaF = 75;
    break;

    case 2:
    printf("\n Sorvete Diet 110 calorias");
    sobremesaF = 110;
    break;

    case 3:
    printf("\n Mouse Diet 170 calorias");
    sobremesaF = 170;
    break;

    case 4:
    printf("\n Mouse de Chocolate 200 calorias");
    sobremesaF = 200;
    break;

    default:
    printf("Erro 402");
    printf("\n Voce informou o codigo errado");
} switch(bebida){
    case 1:
    printf("\n Cha 20 calorias");
    bebidaF = 20;
    break;

    case 2:
    printf("\n Suco de Laranja 70 calorias");
    bebidaF = 70;
    break;

    case 3:
    printf("\n Suco de Melao 100 calorias");
    bebidaF = 100;
    break;

    case 4:
    printf("\n Refrigerante Diet 65 calorias");
    bebidaF = 65;
    break;

    default:
    printf("Erro 402");
    printf("\n Voce informou o codigo errado");
}

cal = pratoF + sobremesaF + bebidaF;
printf("\n A sua refeicao tem %.2d calorias", cal);

}