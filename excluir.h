#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void excluir() {
    int idExcluir;
    int encontrado = 0;

    printf("\nInforme o ID do voo que deseja excluir: ");
    scanf("%d", &idExcluir);

    for(int i = 0; i < contadordeVoos; i++) {
        if(arrayEstruturas[i].id == idExcluir) {
            encontrado = 1;
            // Mover os voos posteriores uma posiçãoo para trás
            for(int j = i; j < contadordeVoos - 1; j++) {
                arrayEstruturas[j] = arrayEstruturas[j+1];
            }
            contadordeVoos--;
            // Redimensionar o array de estruturas
            arrayEstruturas = (informacoes *)realloc(arrayEstruturas, contadordeVoos * sizeof(informacoes));
  printf("\nVoo com ID %d exclu�do com sucesso.\n", idExcluir);
break;
        }
    }
    if(!encontrado) {
        printf("\nVoo com ID %d n�o encontrado.\n", idExcluir);
    }
    return 0;
}

void excluirCliente() {
    int idExcluir;
    int encontrado = 0;

    printf("\nInforme o ID do cliente que deseja excluir: ");
    scanf("%d", &idExcluir);

    for(int i = 0; i < contadordeClientes; i++) {
        if(arrayClientes[i].id == idExcluir) {
            encontrado = 1;
            // Mover os voos posteriores uma posiçãoo para trás
            for(int j = i; j < contadordeClientes - 1; j++) {
                arrayClientes[j] = arrayClientes[j+1];
            }
            contadordeClientes--;
            // Redimensionar o array de estruturas
            arrayClientes = (informacoes *)realloc(arrayClientes, contadordeClientes * sizeof(informacoes));
  printf("\nCliente com ID %d exclu�do com sucesso.\n", idExcluir);
break;
        }
    }
    if(!encontrado) {
        printf("\nCliente com ID %d n�o encontrado.\n", idExcluir);
    }
}