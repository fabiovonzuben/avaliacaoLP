#include <stdio.h>
#include <stdlib.h>
#include "vestibular.h"

 int main()
{
    int p = 0;

    int numCandidatoProcurado = 0;
    int opc = 0;
    inicializar();
    do{
        system("cls");
        printf("\n\nVestibular online\n\n");
        printf("1.. Inserir respostas \n");
        printf("2.. Resultados \n");
        printf("3.. Procurar resultado por numero de inscricao \n");
        printf("4.. Quantidade de Cadastrados \n");
        printf("9.. SAIR \n");
        printf("Escolha sua opcao:  \n");
        scanf("%d", &opc);
        switch(opc){
        case 1:
            responder(p);
           // Resposta(p);
            p++;
            break;
        case 2:
            system("cls");
            Resultados();
            break;
       case 3:
            system("cls");
            printf("Digite o numero do candidato \n");
            scanf("%d", &numCandidatoProcurado);
            Procurar(numCandidatoProcurado);

            break;
        case 9:
            system("cls");
            printf("Finalizou o programa \n");
            break;
        default:
            system("cls");
            printf("opcao invalida, entre novamente \n");
            system("pause");
        }
    }while(opc!=9);



    return 0;
}

