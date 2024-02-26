typedef struct Informacoes{
    int id;
    char partida[50];
    char destino[50];
    char companhia[50];
    float preco;
}informacoes;

informacoes *arrayEstruturas = NULL;



typedef struct Cliente{
    int id;
    char nome[50];
    char cpf[15];
    int idade;
    char telefone[15];
}infoCliente;

//int clientes = 0;
infoCliente *arrayClientes = NULL;

int contadordeClientes = 0;
int contadordeVoos = 0;