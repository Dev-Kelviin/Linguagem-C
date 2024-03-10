#include<stdio.h>
#include<stdlib.h>
int main(){

    float RS, D;
    printf(" Ola, vamos realizar uma cotacao de real para dolar \n ");
    printf("Digite o valor em real para realizar a conversao e tecle enter \n ");
    
    scanf("%f", &RS);

    D = RS * 5.20;
    printf("O valor de %.2fR$ corresponde a %.2f$ \n ",RS,D);




    system("pause");
}