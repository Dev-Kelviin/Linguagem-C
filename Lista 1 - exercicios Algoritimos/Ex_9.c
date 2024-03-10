#include<stdio.h>
#include<stdlib.h>
int main (){

    int b, n, v;
    printf(" supondo que o numero total de eleitores fosse de 500 pessoas\n ");
    printf("dos 500 votos, 10 porcento foram brancos \n"); 
    printf(" 35 porcento sao nulos \n "); 
    printf("55 porcento sao validos \n "); 
   
    printf("temos que \n \n ");

    b = 10 * 500 / 100;
    n = 35 * 500 / 100;
    v = 55 * 500 / 100;

    printf("%i pessoas votaram em branco \n ",b);
    printf("%i pessoas votaram em nulo \n ",n);
    printf("%i pessoas tiveram votos validos \n ",v);

    system("pause");
}