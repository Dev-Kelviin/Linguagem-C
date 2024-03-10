#include<stdio.h>
#include<stdlib.h>

int main(){

    int x=1,y=1, r;

    printf("infomre um numero para que seja exibida sua taboada \n");
    scanf("%i",&y);

    for(x=1;x<=10;x++){
        
        r = y * x;
        printf("%i X %i = %i \n",y,x,r);
        
    }

    return 0;
}




