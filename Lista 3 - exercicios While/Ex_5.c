#include<stdio.h>
#include<stdlib.h>

int main(){

    int x=1, n1, n2=1, r1=1, r2=2, r3=3, r4=4, r5=5, r6=6, r7=7, r8=8, r9=9, r10=10;

    printf("escolha um numero para que seja exibida sua taboada \n ");
    scanf("%i",&n1);

    if(n1 == 1){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r1);
            x++;                        //inicialização , N1 sempre se repete não add nada
            n2++;                       //n2 sempre soma ++  
            r1 = n1 * n2;   
        }
    }

    if(n1 == 2){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r2);
            x++;
            n2++;
            r2 = n1 * n2;
        }
    }

     if(n1 == 3){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r3);
            x++;
            n2++;
            r3 = n1 * n2;
        }
    }           

    if(n1 == 4){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r4);
            x++;
            n2++;
            r4 = n1 * n2;
        }
    }

    if(n1 == 5){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r5);
            x++;
            n2++;
            r5 = n1 * n2;
        }
    }

    if(n1 == 6){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r6);
            x++;
            n2++;
            r6 = n1 * n2;
        }
    }

    if(n1 == 7){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r7);
            x++;
            n2++;
            r7 = n1 * n2;
        }
    }

    if(n1 == 8){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r8);
            x++;
            n2++;
            r8 = n1 * n2;
        }
    }

    if(n1 == 9){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r9);
            x++;
            n2++;
            r9 = n1 * n2;
        }
    }

    if(n1 == 10){
        while(x <= 10){
            printf("%i x %i = %i \n", n1, n2, r10);
            x++;
            n2++;
            r10 = n1 * n2;
        }
    }
    return 0;
}