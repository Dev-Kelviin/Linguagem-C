#include<stdio.h>
#include<stdlib.h>

int main(){

    float salario, desconto;

    printf("entre com seu salario para saber seu desconto de INSS \n ");
    scanf("%f", &salario);

    if(salario <= 600 ){
        printf("isento \n ");
    }
    else if(salario > 600 && salario <= 1200){
        desconto = salario - (salario * 20 / 100);
        printf("20 porcento de desconto, voce ira receber %.2f \n ",desconto);
    }
    else if(salario >= 1200  &&  salario <= 2000){
        desconto = salario - (salario * 25 / 100);
        printf("25 porcento de desconto, voce ira receber %.2f \n ",desconto);
    }
    else if(salario > 2000){
        desconto = salario - (salario * 30 / 100);
        printf("30 porcento de desconto, voce ira receber %.2f \n ",desconto);
    }

return 0;
}



