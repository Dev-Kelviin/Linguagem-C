#include<stdio.h>
#include<stdlib.h>

int main(){

    float salario, valor, prestacao;

    printf("informe seu salario bruto \n ");
    scanf("%f",&salario);

    prestacao = (salario * 30) / 100;

    printf("informe o valor da prestacao \n ");
    scanf("%f",&valor);

    if( valor > prestacao ){
        printf("a prestacao nao sera concediada, valor max de prestacao %.2f reais \n ", prestacao);
    } else {
        printf("pretacao concedida no valor de %.2f reais \n ",valor);
    }
    









    return 0;
}