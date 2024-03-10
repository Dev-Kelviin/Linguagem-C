#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, n1, n2, soma, mult;

    printf("numeros de 4 algarismos com a mesma caracteristica do numero 3025: \n\n");
    

    for(x=1000; x<=9999; x++){
    n1 = x / 100;
    n2 = x % 100;
    
    soma = n1 + n2;
    
    mult = soma * soma;
    
    if(x == mult){
    
    printf("%i\n",x);

    printf("\n%i \n",n1);
    printf("%i \n\n",n2);

    printf("%i + %i = %i \n",n1,n2,soma);

    printf("%i X %i = %i \n\n",soma,soma,mult);

    printf("o numero %i possui a mesma caracteristica \n\n",mult);
    } else {
        
    }
}

return 0;
}
