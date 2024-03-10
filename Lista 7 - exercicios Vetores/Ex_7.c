#include<stdio.h>
#include<stdlib.h>

int main(){

int a[10], x, min, max;

printf("informe 10 numeros para preencher o vetor \n");

for(x=0; x<=9; x++){
    scanf("%i",&a[x]);
    
    if(a[x] > max){
        max = a[x];

    } 

    if(a[x] < min){
        min = a[x];
    }
}

    printf("menor numero digitado: %i \n",min);
    printf("maior numero digitado: %i \n",max); 
}