#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float salario, aumento, total;
    printf("informe seu salario para calcular o reajuste \n ");
    
    scanf("%f", &salario);
     if(salario <=280 ){
        aumento = (salario * 20) / 100;
        total = salario + aumento;
        printf(" seu salario era de %.2f \n ",salario);
        printf("o valor aplicado foi de 20 porcento \n ");
        printf("voce recebeu um aumento de %.2f reais, totalizando em %.2f reais \n ",aumento,total);
     } else if(salario >= 280 && salario <= 700){  
        aumento = (salario * 15) / 100;
        total = salario + aumento;
        printf(" seu salario era de %.2f \n ",salario);
        printf("o valor aplicado foi de 15 porcento \n ");
        printf("voce recebeu um aumento de %.2f reais, totalizando em %.2f reais",aumento,total);
     } else if(salario >= 700 && salario <= 1500){    
        aumento = (salario * 10) / 100;
        total = salario + aumento;
        printf(" seu salario era de %.2f \n ",salario);
        printf("o valor aplicado foi de 10 porcento \n ");
        printf("voce recebeu um aumento de %.2f reais, totalizando em %.2f reais",aumento,total);
     } else if (salario >= 1500 ){                 
        aumento = (salario * 5) / 100;
        total = salario + aumento;
        printf(" seu salario era de %.2f \n ",salario);
        printf("o valor aplicado foi de 5 porcento \n ");
        printf("voce recebeu um aumento de %.2f reais, totalizando em %.2f reais",aumento,total);
     }

     
    return 0;
}