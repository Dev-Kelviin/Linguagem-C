#include<stdio.h>
#include<stdlib.h>
int main(){

    char area;
    int base, altura, r;
    float retangulo,ciruculo, quadrado;

    printf("informe o calculo desejavel \n\n");
    printf("C - area de um circulo \n\n");
    printf("R - area de um retangulo \n\n");
    printf("Q - area de um quadrado \n\n");
    scanf("%s",&area);

    system("cls");
    switch (area){
        case 'c':
        case 'C': 
        printf("informe um valor do raio \n");
        scanf("%i",&r);
        ciruculo = 3.14 * (r * r);
        printf("area de um circulo com raio %i e de %.2f",r,ciruculo);
        break;

        case 'r':
        case 'R': 
        printf("informe o valor da base e da altura \n");
        scanf("%i%i",&base,&altura);
        retangulo = base * altura;
        printf("area de um retangulo e de %.2f",retangulo);
        break;

        case 'q':
        case 'Q': 
        printf("informe o valor dos lados \n");
        scanf("%i%i",&base,&altura);
        quadrado = base * altura;
        printf("a area do quadrado e de %.2f",quadrado);
        break;

        default:
        break;
    }

    return 0;
}