#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, q, x, imp, par;

    printf("quantos numero deseja informar? \n");
    scanf("%i",&q);

    printf("informe %i numeros \n", q);
    for(x=1; x<=q; x++){
        scanf("%i",&n);

        if(n %2==0){
            
        printf("o numeros pares descritos sao %i, \n",n); //como armazenar mais de um valor 
    }

    if(n %2==1){
        printf("o numeros impares descritos sao %i, \n",n);
    }
}

return 0;
}
