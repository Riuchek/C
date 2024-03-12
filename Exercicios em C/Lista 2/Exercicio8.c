#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Construa um programa que armazene o codigo, a quantidade, o valor de compra e o valor de venda de 30 produtos.
    A listagem pode ser de todos os produtos ou somente de um ao se digitar o codigo
    */
   struct produto
   {
    int codigo;
    int qtde;
    double compra;
    double venda;
   };
    int digito;
    int i;
    typedef struct produto  Produto;
    Produto listaProduto[30];
    for (i = 0; i <30; i++)
    {
       listaProduto[i].codigo = i+1;
       listaProduto[i].qtde=rand()%5;
       listaProduto[i].compra=rand();
       listaProduto[i].venda=listaProduto[i].compra+rand();
    }
    printf("Digite o codigo para ser buscado, se nao encontrar ira aparecer todos os codigos dos produtos  ");
    scanf("%d",&digito);
    for (i = 0; i <30; i++)
    {
        if (digito==listaProduto[i].codigo)
        {
          printf("Codigo:%d  Quantidade: %d   Valor da compra: %f    Valor da venda: %f \n",listaProduto[i].codigo,listaProduto[i].qtde,listaProduto[i].compra,listaProduto[i].venda); 
        }
        else
        {
             printf("Codigo:%d  Quantidade: %d   Valor da compra: %f    Valor da venda: %f \n",listaProduto[i].codigo,listaProduto[i].qtde,listaProduto[i].compra,listaProduto[i].venda);
        }
                
    }     
    return 0;
}
