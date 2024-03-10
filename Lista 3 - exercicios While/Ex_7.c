#include<stdio.h>
#include<stdlib.h>

int main(){

    int x=3, soma=0;

    while(x <= 500){
        if(x %2 == 1 && x %3 ==0){
            printf("%i \n",x);

        }
        x++;
        soma = soma + x;
    }

    printf("A soma dos numeros solicitados eh %i \n",soma);





    return 0;
}