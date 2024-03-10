#include<stdio.h>

    int maior(int n1, int n2){

        if(n1 > n2){
            printf("%i e o maior numero digitado \n",n1);
            return n1;
        } else { 
            printf("%i e o maior numero digitado \n",n2);
            return n2;
        }

    }

int main(){

    int n1,n2;

    printf("informe dois valores \n");
    scanf("%i%i",&n1,&n2);

    maior(n1,n2);


}