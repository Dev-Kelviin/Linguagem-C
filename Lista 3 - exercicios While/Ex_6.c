#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    char sexo;
    float a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, media;

    printf("Deseja saber a media do sexo masculino ou feminino? \n");
    printf("Use F - feminino ou M - masculino\n ");
    scanf("%s",&sexo);

    a1 =1.35;
    a2 =2.65;
    a3 =1.65;
    a4 =1.89;
    a5 =1.65;
    a6 =1.36;
    a7 =1.65;
    a8 =1.89;
    a9 =1.69;
    a10 =1.99;

    media = (a1 + a2 + a3 +a4 +a5 +a6 +a7 +a8 +a9 +a10 ) / 10;

    if(sexo == 'F' || sexo == 'f'){
        printf("a media da altura do sexo femenino eh %.2f \n ", media);
    } else {
        printf("a media da altura do sexo masculino eh %.2f \n", media);
    }
 
     
 
 
 
 
 
    return 0;
}