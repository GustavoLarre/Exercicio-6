#include<stdio.h>

main(){

/* 2- Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.*/

//informação inicial
printf("Toten");

//variáveis
int cod, unit;
double unitF;

//entrada dos dados
printf("\n Informe o codigo do seu pedido:");
scanf("%d", &cod);
printf("\n Digite quantas unidades voce quer:");
scanf("%d", &unit);

//operação e saida
switch(cod){
    case 100:
    printf("\n Cachorro quente");
    if(unit == 1){
        printf(" R$ 10.10");
    } else if(unit > 1){
        unitF = unit * 10.10;
        printf(" R$ %.2lf", unitF);
    }
    break;

    case 101:
    printf("\n Bauru simples");
    if(unit == 1){
        printf(" R$ 8.30");
    } else if(unit > 1){
        unitF = unit * 8.30;
        printf(" R$ %.2lf", unitF);
    }
    break;

    case 102:
    printf("\n Bauru com ovo");
    if(unit == 1){
        printf(" R$ 8.50");
    } else if(unit > 1){
        unitF = unit * 8.50;
        printf(" R$ %.2lf", unitF);
    }
    break;

    case 103:
    printf("\n Hamburger");
    if(unit == 1){
        printf(" R$ 12.50");
    } else if(unit > 1){
        unitF = unit * 12.50;
        printf(" R$ %.2lf", unitF);
    }
    break;

    case 104:
    printf("\n Cheeseburger");
    if(unit == 1){
        printf(" R$ 13.25");
    } else if(unit > 1){
        unitF = unit * 13.25;
        printf(" R$ %.2lf", unitF);
    }
    break;

    default:
    printf("Erro 402");
    printf("\n Voce informou o codigo errado");

}

}