#include <stdio.h>
#include <stdlib.h>


int main(){

    float r, pi, A;
   
    printf(" Vamos calcular a area de um circulo \n ");
    printf("Informe o valor do raio \n "); 
    scanf("%f",&r);
    
    pi = 3.14;
    A = pi * (r*r);

    printf("A area do circulo e de %.3f \n ",A);

    system("pause");
}