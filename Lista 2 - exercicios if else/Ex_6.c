#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
    int main(){

        
        float n,p1,p2;
        setlocale(LC_ALL,"Portuguese_Brazil");

        printf("As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$ 1,00 se forem compradas pelo menos 12.\n ");
        printf("quantas ma��s voc� deseja comprar? \n ");
        scanf("%f",&n);

    
  
        if (n <= 11 ){
            p1 = n * 1.30;
            printf("A compra de %.0f ma��s � %.2freais \n ",n,p1);
        }else{
            p2 = n * 1.00;
            printf("A compra de %.0f ma��s � %.2freais \n ",n,p2);
        }



    return 0;   
    }