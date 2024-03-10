#include<stdio.h>
#include<stdlib.h>
int main(){

    int x, n, max, min;

    printf("iforme 10 numeros \n");

    for(x=1; x<= 10; x++){
        scanf("%i",&n);
        if(x==1){
        max=n;
        }
        
        if(n > max){
            max = n;
        }

        if(x==1){
        min=n;
        }

        if(n < min){
            min = n;
        }
    }   

    printf("seu menor numero e %i \n",min);
    printf("seu maior numero e %i \n",max);
    


    return 0;
}