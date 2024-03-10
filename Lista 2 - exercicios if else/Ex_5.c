//Escreva um programa que identifique se um número é par ou impar. Se par apresentar 
//a sua raiz quadrada, se impar apresentar sua metade.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    int main(){
    
    int n1,P,I;
    scanf("%i", &n1);

    if (n1 % 2 == 0) {
        printf("%i eh par.\n", n1);
        P = sqrt(n1);
    printf("A raiz quadrada de %i eh %i",n1,P);
    } else {
        printf("%i eh impar.\n", n1);
        I = n1 / 2;
    printf("A metade de %i eh %.2i",n1,I);
    }




    return 0;
    }
