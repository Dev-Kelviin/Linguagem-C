#include<stdio.h>
#include<stdlib.h>
int main(){

    float p,i;

    printf("diga seu peso e sua idade para saber se voce pode doar sangue ou não \n ");
    printf("diga seu peso \n ");
    scanf("%f", &p);
    
    if(p >= 50){
        printf("diga sua idade \n ");
        scanf("%f",&i);
        if(i >= 18 && i <= 67){
            printf("seu peso e sua altura estao nos parametros corretos, voce pode doar sangue \n ");
        } else {
            printf("sua idade esta fora dos parametros para doar sangue \n ");
        }
    } else {
        printf("voce nao tem o peso suficiente para doar sangue \n ");
    }



    return 0;
}