#include<stdio.h>
#include<stdlib.h>
#include<string.h>


informacoes voo; 

informacoes cadastro(){
    int sairDoLoop = 1;
    do{
        contadordeVoos++;
        voo.id = contadordeVoos;
        system("cls");
        fflush(stdin);
        printf("\n\nInforme Cidade de Partida: ");
        fgets(voo.partida, sizeof(voo.partida), stdin);
        printf("\nInforme a Cidade de Destino: ");
        fgets(voo.destino, sizeof(voo.destino), stdin);
        printf("\nInforme qual a companhia:  ");
        fgets(voo.companhia, sizeof(voo.companhia), stdin);
        printf("\nInforme qual o valor:  ");
        scanf("%f", &voo.preco);
        // return voo;

        if (arrayEstruturas == NULL) {
            arrayEstruturas = (informacoes *)malloc(sizeof(informacoes));
            printf("\n\nO CADASTRO FOI UM SUCESSO!\n\n");
        } else {
            arrayEstruturas = (informacoes *)realloc(arrayEstruturas, (contadordeVoos) * sizeof(informacoes));
            printf("\n\nO CADASTRO FOI UM SUCESSO!\n\n");
        }
        if (arrayEstruturas == NULL) {
            printf("\n\nFALHA NA REALOCAÇÃO\n\n");
            exit(1);
        }
        arrayEstruturas[contadordeVoos-1] = voo;

        printf("Deseja cadastrar um novo voo?\n");
        printf("[1] SIM\n");
        printf("[2] NAO\n");
        scanf("%i", &sairDoLoop);

        }while(sairDoLoop != 2);
}

