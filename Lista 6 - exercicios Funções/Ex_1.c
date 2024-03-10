#include<stdio.h>
#include<stdlib.h>

int pn(int n){
    if(n > 0){
        printf("%i e um numero positivo \n",n);
    } else if(n == 0){
        printf("%i e um valor nulo \n",n);
    } else {
        printf("%i e um numero negativo \n",n);
    }

}

int main(){

    int n;

    printf("informe um valor para saber se ele e positivo ou negativo \n");
    scanf("%i",&n);

    pn(n);
    
}

