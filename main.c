#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"estruturas.h"
#include"cadastro.h"
#include"cliente.h"
#include"liberar.h"
#include"emissao.h"
#include"imprimir.h"
#include"atualizar.h"
#include"excluir.h"


int main() {

    //informacoes *cadastroDeVoo = NULL;
    int opcao = 0;
    int opcaoVoos = 0;
    int opcaoCliente = 0;
    int opcaoEmissao = 0;
    int sairDoLoop = 0;

    // informacoes dados;
    do{
        system("cls");
        printf("\n |||||||||||||||||||||||||||**|||||||||||||||||||||||||||||| ");
        printf("\n ||||||||||||||||||||||||||    |||||||||||||||||||||||||||||");
        printf("\n |||||||||||||||||||||||||      ||||||||||||||||||||||||||||");
        printf("\n ||||||||||||||||||||||||*      *|||||||||||||||||||||||||||");
        printf("\n ||||||||||||||||||||||||        |||||||||||||||||||||||||||");
        printf("\n ||||||||||||||||||||||||        |||||||||||||||||||||||||||");
        printf("\n ||||||||||||||||||||||||        |||||||||||||||||||||||||||");
        printf("\n ||||||||||||||||||||||||        |||||||||||||||||||||||||||");
        printf("\n ||||||||||||||||||||||||        |||||||||||||||||||||||||||");
        printf("\n ||||||||||||||||  ||||||        |||||||  ||||||||||||||||||");
        printf("\n ||||||||**||||||  |***             ***|  |||||**|||||||||||");
        printf("\n ||||||||  |||****    __|        |__     ****||  |||||||||||");
        printf("\n ||||||||***     __---  |        |  ---__       ***|||||||||");
        printf("\n |||***     __---       |        |       ---__       ***||||");
        printf("\n **      ---     ________         ________     ---       **|");
        printf("\n ||||||||| ||||||| ||||||        |||||||| |||||| |||||||||||");
        printf("\n\n               AEROPORTO AVIOES DO FORRO ");
        sairDoLoop = 0;
        printf("\nSEJA BEM VINDO:\n");
        printf("\nEscolha uma opcao pelo numero: ");
        printf("\n[1] VOOS\n");
        printf("[2] CLIENTES\n");
        printf("[3] EMISSAO DE PASSAGEM\n");
        printf("[4] ZERAR DADOS\n");
        printf("[5] SAIR\n");
        printf("--> ");
        scanf("%d", &opcao);
       
        switch(opcao){
            case 1:
                system("cls");
                printf("\nCADASTROS DE VOOS:\n");
                printf("\n\nEscolha uma opcao pelo numero: \n"); 
                printf("[1] - CADASTRAR NOVO VOO\n");
                printf("[2] - LISTAR VOOS\n");
                printf("[3] - IMPRIMIR ESPECIFICO VOO\n");
                printf("[4] - ATUALIZAR VOO\n");
                printf("[5] - EXCLUIR\n");
                printf("[6] - VOLTAR AO MENU PRINCIPAL\n");
                printf("--> ");

                scanf("%d", &opcaoVoos);
                if(opcaoVoos == 1){
                    cadastro(); //chama a função que cadastra os voos
                }else if(opcaoVoos == 2){
                    imprimirTodosOsVoos();
                }else if(opcaoVoos == 3){
                    imprimirVooEspecifico();
                }else if(opcaoVoos == 4){
                    atualizar();
                }else if(opcaoVoos == 5){
                    excluir();
                }else if(opcaoVoos == 6){
                break;
                }else if(opcaoVoos>6){
                    printf("OPCAO INVALIDA");
                }
                break;
            case 2:      
                system("cls");
                printf("\nCADASTROS DE CLIENTES:\n");
                printf("\n\nEscolha uma opcao pelo numero: "); 
                printf("\n\n[1] - CADASTRAR NOVO CLIENTE\n");
                printf("[2] - LISTAR TODOS OS CLIENTES\n");
                printf("[3] - IMPRIMIR CLIENTE ESPECIFICO\n");
                printf("[4] - ATUALIZAR CADASTRO\n");
                printf("[5] - EXCLUIR\n");
                printf("[6] - VOLTAR AO MENU PRINCIPAL\n");
                printf("--> ");

                scanf("%i", &opcaoCliente);
                if(opcaoCliente == 1){
                    cliente();
                }else if(opcaoCliente == 2){
                    imprimirTodosCLientes();
                }else if(opcaoCliente == 3){
                    imprimirClienteEspecifico();
                }else if(opcaoCliente == 4){
                    atualizarCliente();
                }else if(opcaoCliente == 5){
                    excluirCliente();
                }else if(opcaoCliente == 6){
                    break;
                }else if(opcaoCliente>6){
                    printf("OPCAO INVALIDA");
                }
                break; 
            case 3:
                emissao();
                break;
            case 4:
                liberar();    
                break;
            case 5:
                fflush(stdin);
                sairDoLoop = -10;
                break;
            default:
                printf("Opcao Invalida");
                break;
        }
    }while(sairDoLoop != -10);
    free(arrayClientes);
    free(arrayEstruturas);
    return 0;
}

