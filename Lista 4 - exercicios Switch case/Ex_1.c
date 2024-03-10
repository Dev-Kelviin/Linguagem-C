#include<stdio.h>
#include<stdlib.h>
int main (){

    int n1, n2, sub, soma, op;

    printf("informe dois numeros \n");
    scanf("%i%i",&n1,&n2);
    printf("digite 1 - soma \n");
    printf("digite 2 - subtracao \n");
    scanf("%i",&op);
    
    switch (op){
    case 1:
       soma = n1 + n2;
       printf("o resultado da soma eh %i \n",soma);
        break;

        case 2:
       sub = n1 - n2;
       printf("o resultado da subtracao eh %i \n",sub);
        break;
    
    default:
        break;
    }



    return 0;
}