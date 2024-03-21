#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* Um sistema de gerenciamento de pedidos recebe as seguintes informacoes do usuario (considere 10 entrdas): codigo do produto, valor unitario, quantiade vendida.Armazene cada 
    informacao em um vetor propro e 
    a exiba a listagem de protudo da seguinte forma
    codigo     v.unidade     qtde          total item
    1           100           2             200
    b calcule e exiba
        quantidade otal de itens vendidos
        valor toal vendido
        quantidade media de itens por venda
        valor unitario medio
        media do valor total do item
    c  Solicite ao usuario informar um codigo para consulta de item vendido, se o codigo existir exiba todas informacoes do referido codigo:codigo,valor unitario,qtde,total item    
     */
    struct info
    {
        int codProd;
        double valor;
        int qtde;
    };
    typedef struct info Info;
    int i;
    int itens=0;
    double Total;
    double tv=0;
    double media=0;
    double mediatotal=0;
    Info listaProduto[10];
    printf("Codigo   V.Unidade   quantidade    total do item\n");
    for (i = 0; i <10; i++)
    { 
        listaProduto[i].codProd=i+1;
        listaProduto[i].valor=rand()%100;
        listaProduto[i].qtde=rand()%5;
        Total = listaProduto[i].valor *listaProduto[i].qtde;
        printf("%d        %f   %d              %f\n",listaProduto[i].codProd,listaProduto[i].valor,listaProduto[i].qtde,Total);
        itens=itens+listaProduto[i].qtde;
        tv = tv+Total;
    }
    mediatotal=(double)tv/10;
    media=(double)itens/10;
    printf("itens vendidos %d, Valor Total Vendas %f,Media de itens por venda %f,Media do valor total dos itens %f",itens,tv,media,mediatotal);
    
    return 0;
}
