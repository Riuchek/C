#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    /*
    Leia dois vetores de inteiros x e y, cada um com 5 elementos(assuma que o usuario informe elementos repitidos).Calcule e mostre os vetores resultades em cada caso abaixo:

    a Soma entre x e y: some cada elento de x com elemnto da mesma posicao de y
    b Produto entre x e y: multiplique cada elemnto de x com elemnto da mesma posicao de y
    c Diferenca entre x e y: todos os elementos d x que nao existem em y
    d interseccao entre x e y: apenas os elemntos que aparecem nos dois vetores
    e uniao entre x e y: todos os elemtnos de x, e todos elementos de y que nao estao em x 
    */
   int i;
   int x[5];
   int y[5];
   int somaA = 0;
   int produtoA=0;
   int diferencaA=0;
   
   for ( i = 0; i <5; i++)
   {
    x[i] =  rand()%7;
    y[i] = rand()%7;
   }
   for ( i = 0; i <5; i++)
   {
        int interA=0;
        somaA = x[i]+y[i];
        produtoA = x[i]*y[i];
        if (x[i]!=y[i])
        {
            diferencaA = x[i];
        }
        if (x[i]==y[i] && y[i]==x[i])
        {
            interA =x[i];
        }

        printf("\n---------------------------------------\n");
        printf("x%d + y%d = %d     ",i+1,i+1,somaA);
        printf("x%d * y%d = %d   ",i+1,i+1,produtoA);
        printf("  %d nao esta presente em y",diferencaA);
        printf("  %d esta presente em ambos vetores ",interA);
        printf("x: %d",x[i]);
         if (y[i]!=x[i])
        {
         printf(" y:%d ",y[i]);   
        }
   }
   
   
    return 0;
}
