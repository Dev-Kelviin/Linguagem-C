#include<stdio.h>
#include<stdlib.h>
int main() {

float n;
printf("digite um numero para indentificar se e positivo ou negativo.\n ");
scanf("%f", &n);
if(n >= 0 ){
    printf("%.0f e um numero positivo \n ",n);
    }else{
        printf("%.0f e um numero negativo \n",n );
    }


return 0;

}