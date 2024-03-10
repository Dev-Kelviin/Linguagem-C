#include<stdio.h>
#include<stdlib.h>

int main(){

    int x=1, soma=0;
    float media;

    printf("digitem 10 numeros de sua escolha \n");
    printf("para parar tecle 0 \n");
    
    while( x != 0 ){
        scanf("%i",&x);
        
    soma = soma + x;
    }
 
    printf("a soma dos 10 numeros eh %i \n",soma);

    media = soma / 10;
    printf("a media dos numeros eh %.2f \n",media);




    return 0;
}