#include<stdio.h>
#include<stdlib.h>

int ParImpar(int n){
    
    if(n%2==0){
        printf("%i e um numero par \n",n);
    } else {
        printf("%i e um numero impar \n",n);
    }
}

int main(){

    int n;

    printf("informe um valor para saber se ele e par ou impar \n");
    scanf("%i",&n);
    ParImpar(n);
}

