#include <stdio.h>
#include <stdlib.h>
#include "carrinho.h"
int main()
{
    int p = 0;
    int j = 0;
    //int raProc = 0;
    int opc = 0;
    inicializar();
    do{
        system("cls");
        printf("\n\nCarrinho de Compras\n\n");
        printf("1.. Criar produto \n");
        printf("2.. Listar Produtos \n");
        printf("3.. Adicionar Produtos \n");
        printf("4.. Quantidade de Cadastrados \n");
        printf("9.. SAIR \n");
        printf("Escolha sua opcao:  \n");
        scanf("%d", &opc);
        switch(opc){
        case 1:
            CriarProduto(p);
            //descolocar uma posicao
            p++;
            break;
        case 2:
            system("cls");
            ListarProdudtos();
            break;
       case 3:
            system("cls");
            AdicionarProdutos(j);
            break;
       /* case 4:
            system("cls");
            printf("O numero de cadastrado eh: %d \n", p);
            system("pause");
            break;
        case 9:
            system("cls");
            printf("Finalizou o programa \n");
            break;*/
        default:
            system("cls");
            printf("opcao invalida, entre novamente \n");
            system("pause");
        }
    }while(opc!=9);
    return 0;
}
