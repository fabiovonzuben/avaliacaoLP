#include <stdio.h>
#include <stdlib.h>
#include "vestibular.h"

struct Candidato {
    int numCandidato;
    int acertos;
    char nome[51];
    char respostas[10];
};

void inicializar(){
    int i;
    for(i=0; i<T; i++){
        vCandidato[i] = NULL;
    }
}

void responder(int p){
    char gabarito[10] = {'a','b','c','a','a','a','a','a','a','a'};
    if(p>=(T-1)){
        printf("o \n");
        return;
    }
    if(vCandidato[p]==NULL){
        vCandidato[p] = (pcandidato) malloc(sizeof(struct Candidato));
    }
    fflush(stdin);
    printf("Digite o numero da inscricao:  \n");
    scanf("%d", &vCandidato[p]->numCandidato);
    fflush(stdin);
    printf("Digite o nome do candidato:  \n");
    gets(vCandidato[p]->nome);
    Resposta(p);

    for (int i=0; i<T; i++){
        if(vCandidato[p]->respostas[i] == gabarito[i]){
            vCandidato[p]->acertos++;
        }
    }
}

void Resposta(int p){
    char gabarito[10] = {'a','b','c','a','a','a','a','a','a','a'};
    fflush(stdin);
    printf("Digite a sequencia de respostas do gabarito:  \n");
    scanf("%10[A-E a-e]s", vCandidato[p]->respostas);
    fflush(stdin);
    for(int i = 0; i<10; i++){
        if(vCandidato[p]->respostas[i] != 'a'&& vCandidato[p]->respostas[i] != 'b'&& vCandidato[p]->respostas[i] != 'c' &&
           vCandidato[p]->respostas[i] != 'd'&& vCandidato[p]->respostas[i] != 'e'){
            printf("\nATENCAO! Digite dez respostas entre 'a' e 'e'");
            printf("\n");
            Resposta(p);
            system("cls");
        }
    }
}

void Resultados(){
    printf("INSCRICAO\tACERTOS");
    for (int i=0; i<T; i++){
        if(vCandidato[i]!= NULL){
            printf("\n%d", vCandidato[i]->numCandidato);
            printf("\t\t %d", vCandidato[i]->acertos);
        }
    }
    printf("\n");
    system("pause");
}

void Procurar(int n){
    printf("INSCRICAO\tACERTOS");
    for(int i=0; i<T; i++){
        if(vCandidato[i]->numCandidato == n){
            printf("\n%d", vCandidato[i]->numCandidato);
            printf("\t\t %d", vCandidato[i]->acertos);
            break;
        }
    }
    printf("\n");
    system("pause");
}
