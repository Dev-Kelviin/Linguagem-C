#include<stdio.h>
#include<stdlib.h>
int main(){

    char resposta;
    int operacao;
    float deposito, saque, saldo=1575;

    printf("seu saldo em conta e de %.2f REAIS \n",saldo);
    printf("deseja fazer um deposito ou retirada ? \n");
    printf(" informe S - sim \n");
    printf(" informe N - nao \n");
    scanf("%s",&resposta);

    system("cls");
    if(resposta == 'S' || resposta == 's'){
        printf("informe a operacao desejada \n");

        printf("1 - deposito \n");
        printf("2 - retirada \n");
        scanf("%i",&operacao);

            system("cls");
            switch(operacao){

                
                case 1:
                printf("informe o valor a ser depositado \n");
                scanf("%f",&deposito);
                saldo = saldo + deposito;
                printf("+ %.2f, seu saldo atual e de %.2f \n",deposito,saldo);
                break;

                case 2:
                printf("informe o valor a ser sacado \n");
                scanf("%f",&saque);
                saldo = saldo - saque;

                printf("- %.2f, seu saldo atual e de %.2f",saque,saldo);
                break;

                default:
                break;

            }

    } else {
        printf("obrgado, volte sempre \n");
    }




    return 0;
}