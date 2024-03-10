#include<stdio.h>
#include<stdlib.h>
int main(){

    int destino;

    printf("porfavor informe o destino a partir das informaçoes a seguir \n");
    printf("1 - regiao norte \n");
    printf("2 - regiao nordeste \n");
    printf("3 - regiao centro-Oeste \n");
    printf("4 - regiao sul \n");

    scanf("%i",&destino);

    system("cls");
    switch(destino){

        case 1:
        printf("o valor da ida para regiao norte e 500 reais \n");
        printf("o valor da ida e volta e 900 reais \n");
        break;

        case 2:
        printf("o valor da ida para regiao nordeste e 350 reais \n");
        printf("o valor da ida e volta e 650 reais \n"); 
        break;

        case 3:
        printf("o valor da ida para regiao centro-Oeste e 350 reais \n");
        printf("o valor da ida e volta e 600 reais \n"); 
        break;

        case 4:
        printf("o valor da ida para regiao regiao Sul e 300 reais \n");
        printf("o valor da ida e volta e 550 reais \n"); 
        break;

        default:
        break;
        }





    return 0;
}