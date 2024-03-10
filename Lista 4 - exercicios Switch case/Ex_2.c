#include<stdio.h>
#include<stdlib.h>
int main (){

    int lado;

    printf("selecione o numero de lados de uma figura \n");
    printf("3 \n");
    printf("4 \n");
    printf("5 \n");
    printf("6 \n\n");
    scanf("%i",&lado);
    
    switch (lado){
        case 3:
            printf("triangulo\n");
        break;

        case 4:
            printf("Quadrado ou Retangulo\n");
        break;

        case 5:
            printf("Pentagono\n");
        break;

        case 6:
            printf("Hexagono\n");
        break;

        default:
        break;
    }


    return 0;
}