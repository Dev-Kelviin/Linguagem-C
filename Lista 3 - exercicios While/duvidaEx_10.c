#include<stdio.h>
#include<stdlib.h>

int main(){

    int x=1,m,n;

    printf("digite valores para m e n \n");
    scanf("%i%i",&m,&n);

    while(x <=n){
        x=1;
    while(x <= m){
        printf("*");
        x++;
    }
        printf("\n");
        printf("*");
        x++;
    }
    return 0;
}