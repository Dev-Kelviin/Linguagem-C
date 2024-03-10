#include<stdio.h>
#include<stdlib.h>
int main(){

    int A,B,C,D,R,S;

    printf("descreva um valor inteiro e positivo para A,B,C \n ");
    scanf("%i",&A);

    scanf("%i",&B);

    scanf("%i",&C);

    R = (A * A) + (B * B);
    S = (B * B) + (C * C);
    D = (R + S) / 2;

    printf("O valor total da operacao e de %i \n",D);

    system("pause");
}