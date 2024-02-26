#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void atualizar() {
        int idAtualizar = 0;

        printf("\n\nSELECIONE UM ID PARA ATUALIZAR: ");
        scanf("%d", &idAtualizar);

        for (int i = 0; i < contadordeVoos; i++){

            if (arrayEstruturas[i].id == idAtualizar){

                printf("\nAtualizando voo com ID %d\n", idAtualizar);

                printf("\nNova Cidade de Partida: ");
                getchar();
                fgets(arrayEstruturas[i].partida, sizeof(arrayEstruturas[i].partida), stdin);

                printf("\nNova Cidade de Destino: ");
                fgets(arrayEstruturas[i].destino, sizeof(arrayEstruturas[i].destino), stdin);

                printf("\nNova Companhia Aerea: ");
                fgets(arrayEstruturas[i].companhia, sizeof(arrayEstruturas[i].companhia), stdin);

                printf("\nNovo Valor: ");
                scanf("%f", &arrayEstruturas[i].preco);

                printf("\nVoo atualizado com sucesso!\n");
                return;
            }
        }

        printf("\nVoo com ID %d nao encontrado.\n", idAtualizar);

        return 0;
    }


void atualizarCliente() {
        int idAtualizar = 0;

        printf("\n\nSELECIONE UM ID CLIENTE PARA ATUALIZAR: ");
        scanf("%d", &idAtualizar);

        for (int i = 0; i < contadordeClientes; i++){

            if (arrayClientes[i].id == idAtualizar){

                printf("\nAtualizando voo com ID %d\n", idAtualizar);

                printf("\nNovo Nome: ");
                getchar();
                fgets(arrayClientes[i].nome, sizeof(arrayClientes[i].nome), stdin);

                printf("\nNovo CPF: ");
                fgets(arrayClientes[i].cpf, sizeof(arrayClientes[i].cpf), stdin);

                printf("\nNova Telefone: ");
                fgets(arrayClientes[i].telefone, sizeof(arrayClientes[i].telefone), stdin);

                printf("\nAno Nascimento: ");
                scanf("%d", &arrayClientes[i].idade);

                printf("\nVoo atualizado com sucesso!\n");
                return;
            }
        }

        printf("\nCliente com ID %d nao encontrado.\n", idAtualizar);
    }
