#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    int idade;
    printf("para saber se voce pode retirar o titulo de eleitor informe sua idade \n ");
    scanf("%i",&idade);

    if (idade <= 15){
            printf ("seu voto nao e obrigatorio \n ");
        }else if ( idade >= 16 && idade <= 17){
            printf("seu voto e facultativo \n ");
        }else if (idade >= 18 && idade <= 70){
            printf("seu voto e obrigatorio \n ");
        }else if (idade >= 70) {
            printf("seu voto  efacultativo \n ");
        }else if(idade < 15){
            printf ("seu voto nao e obrigatorio \n ");
        }





    system("pause");
}