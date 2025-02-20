#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"



Pessoa dados_pessoa(){
    Pessoa p;
    printf("Digite o nome");
    fgets(p.nome,100,stdin);

    printf("Digite o sexo (f ou m)");
    scanf(" %c",&p.sexo);

    printf("Digite a data de nascimento (dd mm aaaa)");
    scanf("%d%d%d",&p.data.dia,&p.data.mes,&p.data.ano);
}

void imprimir_pessoa(Pessoa p){
    printf("Nome: %s\n",p.nome);
    printf("sexo: %c",p.sexo);
    printf("data de nascimento: %d/%d/%d",p.data.dia,p.data.mes,p.data.ano);
}

void cria_pilha(int tam,No* topo){
    topo == NULL;
    tam = 0;

}

No* empilhar(No* topo){
    No* novo = (No*)malloc(sizeof(No));
    if(novo){
        novo->p = dados_pessoa();
        novo->proximo = topo;
        return novo;
    } else{
        printf("erro ao alocar memoria");
    }
}


No* desempilhar(No** topo){
    No* remove;
    if(*topo != NULL){
    remove = *topo;
    *topo = remove->proximo;
    return remove;
  } else{
    printf("erro ao alocar");
  }
}

int main(void){
No* remover;
No* topo = NULL;
int opcao;

 
do{
    printf("0-Sair\n1-Empilhar\n2-Desempilhar\n3-imprimir");
    switch(opcao){
        case 1:
    topo = empilhar(topo); 
    break;
        case 2:
    remover = (desempilhar(topo));
    break;
        case 3:
    printf("%s",imrpimir_pessoa(topo));
    imprimir_pessoa(topo);
    break;

    default:
    break;
    }
} while(opcao != 0);



    return 0;
}