#include<stdio.h>  
#include<stdlib.h>
int main(){

    int n1, n2, n3, MP;
    printf("Iremos realizar o calculo da media ponderada de um aluno \n ");
    printf("Considerando que as notas sao,2 ,3 e 5 \n ");

    n1 = 2;
    n2 = 3;
    n3 = 5;
    MP = (n1 + n2 + n3) /3 ; 

    printf("A nota do aluno e %i \n",MP);

    system("pause");
}