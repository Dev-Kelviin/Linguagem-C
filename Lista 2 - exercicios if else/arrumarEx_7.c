#include<stdio.h>
#include<stdlib.h>
int main(){

    int idade;
    char nome;
    char sexo;
    char f;
    char F;
    printf("informe seu nome \n ");
    scanf("%s",&nome);

    printf("informe seu sexo 'M' para masculino e 'F' para feminino \n ");
    scanf("%s", &sexo);

        if(sexo == F || sexo == f){
            printf ("informe sua idade \n ");
            scanf ("%i",&idade);
            if(idade <25){
                printf("aceita \n ");
            } else {
                printf("nao aceita \n ");
            }
        } else {
            printf("nao aceita \n ");
        } 
    
    return 0;
}