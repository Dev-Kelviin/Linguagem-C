#include<stdio.h>  
#include<stdlib.h>
int main(){         

    float n1, n2, n3, M;
    
    printf("Iremos realizar o calculo da media de um aluno, de acordo com as tres porvas finais \n ");
    
    printf("informe a nota da primeira prova e tecle enter \n ");
    scanf("%f", &n1);
    
    printf("informe a nota da segunda prova \n ");
    scanf("%f", &n2);

    printf("informe a nota da terceira prova \n ");
    scanf("%f", &n3);

    M = (n1 + n2 + n3) /3 ; 

    printf("A media final do aluno corresponde a %.2f \n ",M);

}