#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[10], rept=0, x, y;

    printf("informe 10 valores para preencher o vetor \n");
    for(x=0; x<=9; x++){
    scanf("%i",&a[x]);

    for(x=0; x<=9; x++){

       for(y=x+1; y<=9; y++){

        if(a[x] == a[y]) 
        rept = rept +1;
    }
       }
    
}

    printf("n repetidos %i", rept);
}

