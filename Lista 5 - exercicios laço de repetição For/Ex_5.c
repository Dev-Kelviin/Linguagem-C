#include<stdio.h>
#include<stdlib.h>

int main(){

    int q, x, n, min, max;

    printf("quantos numero deseja informar? \n");
    scanf("%i",&q);

    printf("informe %i numeros \n",q);
    for(x=1; x<=q; x++){
        scanf("%i",&n);

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
