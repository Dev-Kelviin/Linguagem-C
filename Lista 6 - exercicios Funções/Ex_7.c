#include<stdio.h>
#include<stdlib.h>

float opcao(int op, float t){ 

    float desconto, metade, total, juros;
    int parcela;

    system("cls");

    switch(op){
        case 1:
        desconto = t - (t * 0.1);
        printf("o valor vista com 10%% de desconto fica %.2f reais \n", desconto);
        break;

        case 2:
        metade = t / 2;
        printf("parcelado em duas vezes voce pagara %.2f a cada \n",metade);
        break;

        case 3:
        printf("em quantas vezes deseja parcelar sua compra? \n");

        scanf("%i",&parcela);

        if(parcela >= 3 && parcela <= 10){
        juros = (0.3 * parcela);
        printf("voce pagara %i parcelas com %.2f%% de juros \n",parcela, juros);} 
        
        else {printf("opcao invalida voce deve informar um valor de 3 ate 10 parcelas\n");
        }

        break;

        default:
        break;
    }
}


int main(){


    int op, total;

    printf("informe o total gasto: \n");
    scanf("%i",&total);

    printf("\ninforme a opcao de pagamento desejada \n\n");

    printf("Opcao 1: a vista com 10 porcento de desconto \n");
    printf("Opcao 2: parcelado em duas vezes \n");
    printf("Opcao 3: de 3 ate 10 vezes com 3 porcento de juros ao mes \n");

    

    scanf("%i",&op);

    opcao(op,total);


}