#include<stdio.h>
#include<stdlib.h>
int main (){

    int x, soma=0;

    printf("digite numeros negativos e positivos, sra realizada a soma dos positivos e a quantidade dos negativos \n");
    printf("digite '0' para parar\n ");

    while( x != 0 ){
        scanf("%i,",&x);
        if(x > 0){
        soma = soma + x;
        } 

        if (x < 0){
            x++;
        }  
    }

    printf("a quantidade dos numeros negativos eh %i\n ",x);




    return 0;
}