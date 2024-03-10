#include<stdio.h>
#include<stdlib.h>

int main(){

    float valor, lucro1, lucro2, total1, total2;

    printf("valor do produto \n ");
    scanf("%f",&valor);
       
        if(valor < 20){
            lucro1 =  (valor * 45) / 100;
            total1 = valor + lucro1;
            printf("o lucro de 45 porcento eh de %.2freais, totalizando em %.2f \n ",lucro1, total1);
        } else {
            lucro2 = (valor * 30) / 100;
            total2 = valor + lucro2;
            printf("o lucro de 30 porcento eh de %.2freais, totalizando em %.2f \n ",lucro2, total2);
        }

    system("pause");
}