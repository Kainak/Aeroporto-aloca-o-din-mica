#include<stdio.h>
#include<stdlib.h>
#include<string.h>

infoCliente novoCliente;

infoCliente cliente(){
    int sairDoLoop = 1;
    do{
        contadordeClientes++;
        novoCliente.id = contadordeClientes;
        system("cls");
        fflush(stdin);
        printf("\n\nInforme nome: ");
        fgets(novoCliente.nome, sizeof(novoCliente.nome), stdin);
        printf("\nInforme o CPF: ");
        fgets(novoCliente.cpf, sizeof(novoCliente.cpf), stdin);
        printf("\nInforme um telefone para contato:  ");
        fgets(novoCliente.telefone, sizeof(novoCliente.telefone), stdin);
        printf("\nInforme o ano de nascimento:  ");
        scanf("%d", &novoCliente.idade);
        // return voo;

        if (arrayClientes == NULL) {
            arrayClientes = (infoCliente *)malloc(sizeof(infoCliente));
            printf("\n\nO CADASTRO FOI UM SUCESSO!\n\n");
        } else {
            arrayClientes = (infoCliente *)realloc(arrayClientes, (contadordeClientes) * sizeof(infoCliente));
            printf("\n\nO CADASTRO FOI UM SUCESSO!\n\n");
        }
        if (arrayClientes == NULL) {
            printf("\n\nFALHA NA REALOCAÇÃO\n\n");
            exit(1);
        }
        arrayClientes[contadordeClientes-1] = novoCliente;

        printf("Deseja cadastrar um novo cliente?\n");
        printf("[1] SIM\n");
        printf("[2] NAO\n");
        scanf("%i", &sairDoLoop);

        }while(sairDoLoop != 2);

}
