typedef struct datanas{
    int dia,mes,ano;
} DataNas;

typedef struct pessoa{
    char nome[100];
    char sexo;
    DataNas data;
} Pessoa;

typedef struct no{
Pessoa p;
struct no *proximo;
}No;

void cria_pilha(int tam, No* topo);

No* empilhar(No* topo);

No* desempilhar(No** topo);

Pessoa dados_pessoa();

void imprimir_pessoa(Pessoa p);

