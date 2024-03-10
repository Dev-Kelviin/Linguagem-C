#include<stdio.h>
#include<stdlib.h>
int main(){

    int x, n, max;

    printf("iforme 10 numeros \n");

    for(x=1; x<= 10; x++){
        scanf("%i",&n);
         if(x==1){
            max=n;
         }
         if(n > max){
            max = n;
         }
        
        
    }

   
    printf("%i e o seu maior numero \n",max);


    return 0;
}