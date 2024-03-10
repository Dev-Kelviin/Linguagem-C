#include<stdio.h>
#include<stdlib.h>

int main (){

    int x=1;
    float salario;
    

    printf("para saber o valor a ser descontado do imposto de renda informe seu salario \n");
    
    
    while ( x != 0){
        scanf("%f",&salario);

        if(salario >=1 && salario <=1637.11){
            printf("isento \n\n");
        } else if (salario >= 1637.12 && salario <= 2453.50){
            printf("7.5 porcento de desconto \n\n");
        } else if (salario >= 2453.51 && salario <=3271.38){
            printf(" 15.0 porcento de desconto \n\n");
        } else if(salario >= 3271.39 && salario <= 4087.65){
            printf(" 22.5 porcento de desconto\n\n");
        } else if(salario >= 4087.66){
            printf("27.5 porcento de desconto\n\n");
        }

        printf("se deseja fazer outra consulta digite 1, e dpois o valor de sua escolha \n");
        printf("se deseja parar digite 0 \n\n");
        scanf("%i",&x);

        if(x != 0){
            system("cls");
        }
    }
        

    return 0;
}



