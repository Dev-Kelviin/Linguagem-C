#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float a, b, h;
    
    printf("informe os lados de um triangulo retangulo para obter o resultado da hipotenusa \n "); 

    printf("informe o lado A \n ");
    scanf("%f",&a);

    printf("informe o lado B \n ");
    scanf("%f",&b);

    h = sqrt(pow(a,2) + pow(b,2));
    

    if(h > 100){
        printf("hipotenusa excede o tamanho permitido para area \n ");
    } else {
        printf("hipotenusa aceita \n ");
    }


    return 0;
}