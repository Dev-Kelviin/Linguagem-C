#include<stdio.h>
#include<stdlib.h>

int main(){

    int max, n;

    printf("informe um valor maximo: \n");
    scanf("%i",&max);

    system("cls");
    for(n=1; n <= max; n++){

        if(n % 2==1){
            printf("%i \n",n);
        }
    }


    return 0;
}