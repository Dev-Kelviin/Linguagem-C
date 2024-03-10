#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
    int main(){

        
        float n,p1,p2;
        setlocale(LC_ALL,"Portuguese_Brazil");

        printf("As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12.\n ");
        printf("quantas maçãs você deseja comprar? \n ");
        scanf("%f",&n);

    
  
        if (n <= 11 ){
            p1 = n * 1.30;
            printf("A compra de %.0f maçãs é %.2freais \n ",n,p1);
        }else{
            p2 = n * 1.00;
            printf("A compra de %.0f maçãs é %.2freais \n ",n,p2);
        }



    return 0;   
    }