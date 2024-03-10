#include<stdio.h>
#include<stdio.h> 
int main (){

    char plano;
    int kids, jovem, idoso, especial;

    printf("informe o tipo de plano desejado \n\n"); 
    printf("K - 1 a 10 anos \n"); 
    printf("J - entre 10 e 30 anos \n"); 
    printf("I - entre 40 e 60 anos \n"); 
    printf("E -  mais de 60 anos \n\n");
    scanf("%s",&plano);


    switch(plano){
        case 'K':
        case 'k':
        kids = 100 + 80;
        printf("o valor do plano kids e de %i",kids);
         break;

        case 'J':
        case 'j':
        jovem = 100 + 50;
        printf("o valor do plano jovem e de %i",jovem);
         break;

        case 'I':
        case 'i':
        idoso = 100 + 95;
        printf("o valor do plano idoso e de %i",idoso);
         break;

        case 'E':
        case 'e':
        especial = 100 + 130;
        printf("o valor do plano idoso e de %i",especial);
         break;

         default:
         break;

    }



    return 0;
}