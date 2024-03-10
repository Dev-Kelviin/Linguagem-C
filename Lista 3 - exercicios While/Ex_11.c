#include<stdio.h>
#include<stdlib.h>

int main(){

    int x=1,n;
    printf("digite um numero para n \n");
    scanf("%i",&n);

    while(n >= 1){
        x=1;
    while(x <= n){
        printf("*");
        x++;
    }
    
    printf("\n");
    n--;

    }


    return 0;
}