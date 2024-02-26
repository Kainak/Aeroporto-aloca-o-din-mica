#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"estruturas.h"

void emissao()
{

    int sairDoLoop = 0;
    int escBuscaCliente = 0;
    char nomeCliente[50];
    int flag1 = 0, flag2 = 0, flag3 = 1, flag4 = 0;
    do
    {
        if(arrayClientes == NULL)
        {
            printf("\nVOCE AINDA NAO CADASTROU NENHUM CLIENTE!\n");
            printf("\n[1] - VOLTAR AO MENU INICIAL");
            scanf("%i", &sairDoLoop);
        }
        else if(arrayEstruturas == NULL)
        {
            printf("\nVOCE AINDA NAO CADASTROU NENHUM VOO!\n");
            printf("\n[1] - VOLTAR AO MENU INICIAL");
            scanf("%i", &sairDoLoop);
            break;
        }
        else
        {
            int escolhaVoo = 0;
            int escolhaCliente = 0;
            system("cls");
            printf("\nIMPRESSAO DE PASSAGEM!\n");
            printf("\nDigite a opcao desejada");
            printf("\n[1] Buscar por ID");
            printf("\n[2] Buscar por Nome\n");
            printf("--> ");
            scanf("%i",&escBuscaCliente ); //salva a escolha de busca
            if(escBuscaCliente == 1) //Busca o cliente pelo ID
            {
                printf("\nPor favor digite o ID do CLIENTE que deseja buscar:\n");
                printf("--> ");
                scanf("%i", &escolhaCliente); //salva o id do usuario
                for(int i = 0; i < contadordeClientes; i++)
                {
                    if (escolhaCliente == arrayClientes[i].id)
                    {
                        flag1 = 1;
                    }
                }
                if(flag1 == 0 )
                {
                    printf("\nCliente não encontrado!");
                    printf("\nPressione Enter para continuar...");
                    getchar();
                    break;
                }
                else if(flag1 == 1)
                {
                    printf("--> %s", arrayClientes[escolhaCliente-1].nome);
                }
            }
            else if(escBuscaCliente == 2)  //Busca o cliente pelo nome
            {
                fflush(stdin);
                printf("\nPor favor digite o nome do CLIENTE que deseja buscar:\n");
                printf("--> ");
                gets(nomeCliente); //salva o nome do usuario
                for(int i = 0; i < contadordeClientes; i++)
                {

                    if(strcmp(arrayClientes[i].nome, nomeCliente) == 1) //compara nome pra ver se há na struct
                    {
                        printf("\n[%d] - %s\n",arrayClientes[i].id, arrayClientes[i].nome);
                        printf("CPF: %s\n", arrayClientes[i].cpf);
                        flag2 = 1; // se houver
                    }
                }

                if(flag2 == 0 )  //se não encontrou
                {
                    printf("\nCliente nao encontrado!");
                    printf("\nPressione Enter para continuar...");
                    getchar();
                    break;

                }
                else if(flag2 == 1)   //se encontrou um ou mais
                {
                    printf("\nConfirme o ID do cliente correto: -> ");
                    scanf("%d", &escolhaCliente); //salva id do cliente na variavel que sera usada pra imprimir no ticket
                }
            }

            printf("\n[1] - ESCOLHER VOO");
            printf("\n[2] - VOLTAR AO MENU PRINCIPAL");
            scanf("%i", &flag3);

            if(flag3 == 1)
            {
                printf("\nPor favor digite o ID do Voo que deseja buscar:\n");
                printf("--> ");
                scanf("%d", &escolhaVoo);

                for(int i = 0; i < contadordeVoos; i++)  //confere se o id existe no sistema
                {
                    if (escolhaVoo == arrayEstruturas[i].id)
                    {
                        flag4 = 1;
                    }
                }
                if(flag4==1)

                {
                    system("cls");
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - -");
                    printf("\n----------------AVIOES DO FORRO----------------");
                    printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
                    FILE *arquivo;
                    arquivo = fopen("saida.txt", "w"); // Abre o arquivo

                    if (arquivo == NULL)
                    {
                        fprintf(stderr, "Erro ao abrir o arquivo.\n");
                        return;
                    }

                    fprintf(arquivo, "\n- - - - - - - - - - - - - - - - - - - - - - - -");
                    fprintf(arquivo, "\n----------------AVIÕES DO FORRÓ----------------");
                    fprintf(arquivo, "\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");

                    for(int i = 0; i < contadordeClientes; i++)
                    {
                        if(escolhaCliente == arrayClientes[i].id)
                        {
                            printf("\nNome:     %s", arrayClientes[escolhaCliente-1].nome);
                            printf("\nIdade:    %d anos", 2023-arrayClientes[escolhaCliente-1].idade);
                            printf("\nCPF:      %s", arrayClientes[escolhaCliente-1].cpf);
                            printf("\nTelefone: %s", arrayClientes[escolhaCliente-1].telefone);
                            fprintf(arquivo, "\nNome:     %s", arrayClientes[escolhaCliente-1].nome);
                            fprintf(arquivo, "\nIdade:    %d anos", 2023-arrayClientes[escolhaCliente-1].idade);
                            fprintf(arquivo, "\nCPF:      %s", arrayClientes[escolhaCliente-1].cpf);
                            fprintf(arquivo, "\nTelefone: %s", arrayClientes[escolhaCliente-1].telefone);
                        }
                    }
                    for (int i = 0; i < contadordeVoos; i++)
                    {
                        if (escolhaVoo == arrayEstruturas[i].id)
                        {
                            printf("\nCidade de Partida: %s", arrayEstruturas[escolhaVoo-1].partida);
                            printf("\nCidade de Destino: %s", arrayEstruturas[escolhaVoo-1].destino);
                            printf("\nCompanhia Aerea:   %s", arrayEstruturas[escolhaVoo-1].companhia);
                            printf("\nValor:                                 R$%.2f", arrayEstruturas[escolhaVoo-1].preco);
                            printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
                            fprintf(arquivo, "\nCidade de Partida: %s", arrayEstruturas[escolhaVoo-1].partida);
                            fprintf(arquivo, "\nCidade de Destino: %s", arrayEstruturas[escolhaVoo-1].destino);
                            fprintf(arquivo, "\nCompanhia Aerea:   %s", arrayEstruturas[escolhaVoo-1].companhia);
                            fprintf(arquivo, "\nValor:             R$%.2f", arrayEstruturas[escolhaVoo-1].preco);
                            fprintf(arquivo, "\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
                        }
                    }

                    fclose(arquivo); //fecha o arquivo

                }
                else  // se não existir
                {
                    printf("Voo nao encontrado!");
                    printf("\nPressione Enter para continuar...");
                    getchar();
                    break;
                }
            }

            printf("\n\n\n [1] VOLTAR PARA O MENU");
            scanf("%i", &sairDoLoop);
        }

    }
    while (sairDoLoop != 1);
}

