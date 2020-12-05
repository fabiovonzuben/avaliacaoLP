#include <stdio.h>
#include <stdlib.h>
#include "carrinho.h"

struct Produto {
    int codigo;
    char descricao[50];
    float precoUnit;
};

struct Carrinho {
    int numItem;
    int codigoProduto;
    int qtd;
    char descProduto[50];
    float precoPunit;
    float precoTotal;
};

void inicializar(){
    int i;
    for(i=0; i<T; i++){
        vProduto[i] = NULL;
    }
}

void CriarProduto(int p) {
    if(p>=(T-1)){
        printf("Ocupou todos os espacoes possiveis \n");
        return;
    }
    if(vProduto[p]==NULL){
        vProduto[p] = (pProduto) malloc(sizeof(struct Produto));
    }
    fflush(stdin);
    printf("Digite o codigo do produto: ");
    scanf("%d", &vProduto[p]->codigo);
    fflush(stdin);
    printf("\nDigite a descricao do produto: ");
    gets(vProduto[p]->descricao);
    fflush(stdin);
    printf("\nPreco Unitario: ");
    scanf("%f", &vProduto[p]->precoUnit);
    fflush(stdin);
}

void AdicionarProdutos(int j) {
    //int j = 0;
    if(j>=(T-1)){
        printf("Limite máximo de produtos adicionados \n");
        return;
    }
    if(vCarrinho[j]==NULL){
        vCarrinho[j] = (pCarrinho) malloc(sizeof(struct Carrinho));
    }

    int opcao = 0;
    //int itens[100];
    do {
        int i=0;
        //fflush(stdin);
        printf("\nDigite o codigo do produto para adicionar ao carrinho: ");
        scanf("%d", &vCarrinho[j]->codigoProduto);

        for(i; i<=10; i++){
            if(vCarrinho[j]->codigoProduto == vProduto[i]->codigo){
                printf("\nPRODUTO \tPRECO UNT");
                printf("\n%s", vProduto[i]->descricao);
                printf("\t\t%.2f\n", vProduto[i]->precoUnit);
                printf("\nDigite a quantidade desejada: ");
                scanf("%d", &vCarrinho[j]->qtd);

                vCarrinho[j]->descProduto[20] = vProduto[i]->descricao[20];
                vCarrinho[j]->precoPunit = vProduto[i]->precoUnit;
                //vCarrinho[j]->precoTotal = vCarrinho[j]->precoTotal + vCarrinho[i]->precoPunit;

                printf("\nCODIGO \tDESCRICAO \tQNT \tVALOR UNT \tTOTAL");
                printf("\n%d", vCarrinho[j]->codigoProduto);
                printf("\t %s", vProduto[i]->descricao);
                //printf("\t %s", vCarrinho[j]->descProduto);
                printf("\t\t %d", vCarrinho[j]->qtd);
                printf("\t %.2f", vCarrinho[j]->precoPunit);
                printf("\t %.2f", vCarrinho[j]->qtd*vCarrinho[j]->precoPunit);
                j=j+1;

                break;
            }
            }




            //printf("\n %d \t %s \t %d \t %.2f", vProduto[itens[i]]->codigo, vProduto[itens[i]]->descricao, vCarrinho);
    }while(opcao !=9);
}

void ListarProdudtos() {
    for(int i=0; vProduto[i]!= NULL; i++){
        printf("CCODIGO \tDESCRICAO \tPRECO UNT");
        printf("%d", vProduto[i]->codigo);
        printf("\t%s", vProduto[i]->descricao);
        printf("\tR$ %.2f", vProduto[i]->precoUnit);
        printf("\n");
    }
    system("pause");
}
