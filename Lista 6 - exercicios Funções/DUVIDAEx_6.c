#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int potencia(int x, int f){
    f = pow(x,100);
    printf("uma base %i elevado a 100 e %i \n",x,f);
    return f;

}

int main(){

    int x,f;

    printf("informe o valor de 'X' para calcular a segunte funcao:\nF(x , n) = x^ n, considerando que 'n' equivale a 100 \n");
    scanf("%i",&x);

    potencia(x,f);

}