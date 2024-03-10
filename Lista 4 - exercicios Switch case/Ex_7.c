#include<stdio.h>
#include<stdlib.h>
int main(){

    int planeta, massa; 
    float peso;

    printf("para saber seu peso em determinado planeta do sistema solar, informe seu peso e o planeta desejavel \n");
    printf("escolha o planeta a partir das instricoes a seguir: \n\n");
    printf("1 - Mercurio \n");
    printf("2 - Venus \n");
    printf("3 - Marte \n");
    printf("4 - Jupiter \n");
    printf("5 - Saturno \n");
    printf("6 - Urano \n");

    scanf("%i",&planeta);
    system("cls");

    printf("informe seu peso em Kg \n");
    scanf("%i",&massa);
    
    system("cls");
    switch(planeta){

        case 1:
            peso = massa * 0.37;
            printf("seu peso em mercurio e de %.2f \n",peso);
        break;

        case 2:
            peso = massa * 0.88;
            printf("seu peso em venus e de %.2f \n",peso);
        break;

        case 3:
            peso = massa * 0.38;
            printf("seu peso em marte e de %.2f \n",peso);
        break;

        case 4:
            peso = massa * 2.64;
            printf("seu peso em jupter e de %.2f \n",peso);
        break;

        case 5:
            peso = massa * 1.15;
            printf("seu peso em saturno e de %.2f \n",peso);
        break;

        case 6:
            peso = massa * 1.17;
            printf("seu peso em urano e de %.2f \n",peso);
        break;




        default:
        break;

    }
    return 0;
}