#include<stdio.h>
#include<stdlib.h>

int main(){

int b=7, x, a[8];
printf("informe 8 numero para preencher o vetor \n");

for(x=0; x<=7; x++){
    scanf("%i",&a[x]);
}
printf("os numeros na ordem contraria e: \n");

for(x=7; x>=0; x--){
printf("A%i = %i\n",b ,a[x]);
b--;
}
}