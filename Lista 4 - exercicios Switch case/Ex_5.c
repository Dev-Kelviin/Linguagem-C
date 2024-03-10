#include<stdio.h>
#include<stdlib.h>
int main(){

    char tipo;
    int A, B, C, l;


    printf("informe o tipo do carro para saber o consumo medio \n");
    printf("A - TPO A\n");
    printf("B - TIPO B\n");
    printf("C - TIPO C \n\n");
    scanf("%s",&tipo);
    printf("informe a quantidade percorrida \n");
    scanf("%i",&l);


    system("cls");
    switch(tipo){

        case 'A':
        case 'a':
        A= 12 * l;
        printf("o consumo medio do carro tipo A e de %i \n",A);
        break;

        case 'B':
        case 'b':
        B= 9 * l;
        printf("o consumo medio do carro tipo A e de %i \n",B);
        break;

        case 'C':
        case 'c':
        C= 8 * l;
        printf("o consumo medio do carro tipo A e de %i \n",C);
        break;

      default:
      break;  
    }


    return 0;
}