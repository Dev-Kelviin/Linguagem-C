#include <stdio.h>
#include <stdlib.h>

int main () {

    float n1, n2, soma, sub, mult, divi;

    printf("ola, hoje vamos realizar algumas operacoes matematicas a partir de dois numeros de sua escolha \n");
    printf("digite um numero e tecle enter \n");
    scanf("%f", &n1);
    printf("digite outro numero \n");
    scanf("%f", &n2);
    
    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    divi = n1 / n2;
    printf("o resultado da soma de %.f + %.0f e %.2f \n" ,n1 ,n2, soma);
    printf("o resultado da subtracao de %.0f - %.0f e %.2f \n" ,n1 ,n2, sub);
    printf("o resultado da multiplicacao de %.0f X %.0f e %.2f \n" ,n1 ,n2, mult);
    printf("o resultado da divisao de %.0f / %.0f e %.2f \n" ,n1 ,n2, divi);
    

    
}