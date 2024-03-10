#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[8], x, X, Y, n1,n2, sm1, sm2;

    printf("informe 8 valores para preencher o vetor \n");
    for(x=0; x<=7; x++){
        scanf("%i",&a[x]);
    }

    printf("informe um valor para X e outro para Y \n");
    scanf("%i%i",&X,&Y);

    printf("em qual posicao de 0 a 7 voce deseja somar X ? \n");
    scanf("%i",&n1);
    printf("em qual posicao de 0 a 7 voce deseja somar Y ? \n");
    scanf("%i",&n2);

    a[n1] =  a[n1] + X;
    a[n2] =  a[n2] + Y;

    for(x=0; x<=7; x++){
        printf("A%i = %i \n",x,a[x]);
    }
}
