#include<stdio.h>
#include<stdlib.h>
int main(){

    float P, A, IMC;

    printf("vamos realizar o calculo de IMC, indice de massa corporal \n ");
    printf("me informe seu peso \n ");
    scanf("%f", &P);
    printf("me informe sua altura \n ");
    scanf("%f", &A);

    IMC = P / (A*A);
    printf("seu IMC coreesponde a %.2f \n ",IMC);


    system("pause");
}