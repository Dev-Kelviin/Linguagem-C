#include<stdio.h>
#include<stdlib.h>
int main(){

    float n,n1,n2;

    printf("para saber a media do aluno digite as duas notas da prova \n ") ;
    printf("digite a nota 1 \n ");
    scanf("%f",&n1);
    printf("digite a nota 2 \n ");
    scanf("%f",&n2);

    n = (n1 + n2) / 2;

    if (n <=5){
        printf("reprovado \n ");
    }else if (n >=5.1 && n <= 6.9 ){
        printf("Exame \n ");
    }else if (n >= 7 && n <=10){
        printf("Aprovado \n ");
    }
    
    





    system("pause");
}