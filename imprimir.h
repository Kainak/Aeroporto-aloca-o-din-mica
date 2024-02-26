#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprimirTodosOsVoos(){
    int sairDoLoop = 0;
    do{ 
        system("cls");

        if(arrayEstruturas == NULL){
            printf("\nVOCE AINDA NAO REALIZOU NENHUM CADASTRO!");
            printf("\n\n [1] VOLTAR PARA O MENU");
            scanf("%i", &sairDoLoop);
        }else{         
            for (int  i = 0; i < contadordeVoos; i++){     
            printf("\n- - - - - - - - - - - - - - - - - - - - - - - -");
            printf("\n\n      ID do Voo: %d", arrayEstruturas[i].id);
            printf("\nCidade de Partida: %s", arrayEstruturas[i].partida);
            printf("\nCidade de Destino: %s", arrayEstruturas[i].destino);
            printf("\nCompanhia Aerea:   %s", arrayEstruturas[i].companhia);
            printf("\nValor:         R$%.2f", arrayEstruturas[i].preco);
            printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
            }
            printf("\n [1] VOLTAR PARA O MENU");
            scanf("%i", &sairDoLoop);
    } 
    }while(sairDoLoop != 1);

}

void imprimirTodosCLientes(){

    int sairDoLoop = 0;
    do{
        system("cls");
        if(arrayClientes == NULL){
            printf("\nVOCE AINDA NAO REALIZOU NENHUM CADASTRO!");
            printf("\n\n [1] VOLTAR PARA O MENU");
            scanf("%i", &sairDoLoop);
        }else{   
            for (int  i = 0; i < contadordeClientes; i++){     
            printf("\n- - - - - - - - - - - - - - - - - - - - - - - -");
            printf("\n\n      ID CLIENTE: %d", arrayClientes[i].id);
            printf("\nNOME: %s", arrayClientes[i].nome);
            printf("\nCPF: %s", arrayClientes[i].cpf);
            printf("\nTELEFONE:   %s", arrayClientes[i].telefone);
            printf("\nIDADE         %d", 2023-arrayClientes[i].idade);
            printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
            }
        }
        printf("\n [1] VOLTAR PARA O MENU");
        scanf("%i", &sairDoLoop);
    } while(sairDoLoop != 1);

}

void imprimirVooEspecifico(){
    int sairDoLoop = 0;
    int escolhaVoo = 0;
    int flag4 = 0;
    do{         
        system("cls");
        if(arrayEstruturas == NULL){
            printf("\nVOCE AINDA NAO REALIZOU NENHUM CADASTRO!");
            printf("\n\n [1] VOLTAR PARA O MENU");
            scanf("%i", &sairDoLoop);
        }else{

            printf("\nPOR FAVOR DIGITE O ID O DO VOO QUE DESEJA BUSCAR:");
            scanf("%d", &escolhaVoo);

            for(int i = 0; i < contadordeVoos; i++){ //confere se o id existe no sistema
                if (escolhaVoo == arrayEstruturas[i].id){
                flag4 = 1;
                }  
            }
            if(flag4==1){ //se existir 
                       
            for (int i = 0; i < contadordeVoos; i++){//percorre vetor de Voos para imprimir escolhido
                if (escolhaVoo == arrayEstruturas[i].id){
                    printf("\n\nID do Voo: %d", arrayEstruturas[i].id);
                    printf("\nCidade de Partida: %s", arrayEstruturas[escolhaVoo-1].partida);
                    printf("\nCidade de Destino: %s", arrayEstruturas[escolhaVoo-1].destino);
                    printf("\nCompanhia Aerea:   %s", arrayEstruturas[escolhaVoo-1].companhia);
                    printf("\nValor:           R$%.2f", arrayEstruturas[escolhaVoo-1].preco);
                    printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");                            
                }
            }
            }else{// se não existir
                printf("Voo nao encontrado!");
                printf("\nPressione Enter para continuar...");
                getchar();
            break;   
            }
            printf("\n [1] VOLTAR PARA O MENU");
            scanf("%i", &sairDoLoop);
    } 
    }while(sairDoLoop != 1);
}

void imprimirClienteEspecifico(){
    int sairDoLoop = 0;
    int escolhaCliente = 0;
    int flag4 = 0;
    do{         
        system("cls");
        if(arrayClientes == NULL){
            printf("\nVOCE AINDA NAO REALIZOU NENHUM CADASTRO!");
            printf("\n\n [1] VOLTAR PARA O MENU");
            scanf("%i", &sairDoLoop);
        }else{

            printf("\nPOR FAVOR DIGITE O ID O DO CLIENTE QUE DESEJA BUSCAR:");
            scanf("%d", &escolhaCliente);  

            for (int  i = 0; i < contadordeClientes; i++){
                if (escolhaCliente == arrayClientes[i].id){      
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - -");
                printf("\n\nID CLIENTE: %d", arrayClientes[i].id);
                printf("\nNOME: %s", arrayClientes[i].nome);
                printf("\nCPF: %s", arrayClientes[i].cpf);
                printf("\nTELEFONE:   %s", arrayClientes[i].telefone);
                printf("\nIDADE         %d", 2023-arrayClientes[i].idade);
                printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");

                printf("\n ENTER PARA VOLTAR AO MENU");
                getchar();
                break;
                }
            }
            // se não existir
            printf("Cliente nao encontrado!");
            printf("\nPressione Enter para continuar...");
            getchar();
            break;   
        }
 
    }while(sairDoLoop != 1);
}


