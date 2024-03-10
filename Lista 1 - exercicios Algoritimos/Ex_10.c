#include<stdio.h>
#include<stdlib.h>
int main(){

    float B, b, h, A;
    printf("vamos realizar o calculo da area de um trpezio \n");
    printf("informe os dados numericos necessarios e tecle enter \n");
    
    printf("Informe o valor da base maior \n");
    scanf("%f",&B);
    printf("Informe o valor da base menor \n");
    scanf("%f",&b );
    printf("Informe o valor da altura do trapezio \n");
    scanf("%f",&h);

    A = (B + b) * h /2; 

    printf("A area do trapezio corresponde a %.2f \n ",A);

    system("pause");
}