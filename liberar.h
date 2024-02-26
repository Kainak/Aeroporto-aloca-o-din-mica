#include<stdio.h>
#include<stdlib.h>
#include<string.h>   
    
void liberar(){
    int sairDoLoop = 0;
    do{
        int certeza = 0;
        system("cls");
        printf("TEM CERTEZA QUE DESEJA LIBERAR A MEMORIA?");
        printf("\nEsse acao eh irreversivel");
        printf("\n\n[1] - SIM");
        printf("\n[2] - NAO");
        scanf("%i", &certeza);
        if (certeza == 1){              
            free(arrayEstruturas);
            arrayEstruturas = NULL; //para garantir que o ponteiro não aponta nenhum endereço de memoria e não bugar tudo
            free(arrayClientes);
            arrayClientes = NULL;//para garantir que o ponteiro não aponta nenhum endereço de memoria e não bugar tudo

            contadordeClientes = 0;
            contadordeVoos = 0;

            if(arrayEstruturas == NULL){//testa se liberou mesmo
                printf("\nMemoria liberada com sucesso");
            }else{
                printf("\nVestigio de memória");
            }
        }else if(certeza == 2){
            printf("\nVOLTANDO AO MENU...");                        
        }else if(certeza != 1 || certeza != 2){
            printf("\nOPCAO INVALIDA");
        }

        printf("\n[1] - VOLTAR AO MENU PRINCIPAL");
        scanf("%i", &sairDoLoop);
    }while(sairDoLoop == 0);
}