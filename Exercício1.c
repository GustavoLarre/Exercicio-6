#include<stdio.h>

main(){

/* 1- Usando o comando switch, faça um algoritimo que leia o número de DDD e informe aa qual cidade pertence.*/

//informção inicial
printf("Lista telefonica");

//variáveis
int num;

//entrada do dado
printf("\n Digite o DDD:");
scanf("%d", &num);

//operação e saída
switch(num){
    case 61:
    printf("\n Brasilia");
    break;

    case 71:
    printf("\n Salvador");
    break;

    case 11:
    printf("\n Sao Paulo");
    break;

    case 21: 
    printf("\n Rio de Janeiro");
    break;

    case 32:
    printf("\n Juiz de Fora");
    break;

    case 19:
    printf("\n Campinas");
    break;

    case 27:
    printf("\n Vitoria");
    break;

    case 31:
    printf("\n Belo Horizonte");
    break;

    default:
    printf("\nEsta cidade brasileira esta sem identificacao");
}

}