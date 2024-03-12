#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escreva um programa que preencha, com valores aleatorios até 1000, de uma matriz 10x10
    Em seguida, mostre o indice da linha e o indice da coluna e o valor das posicoes nao nulas. 
    
    */
   int  i,j;
   int m[10][10];
   int valor;
   for ( i = 0; i <10; i++)
   {
    for ( j = 0; j <10; j++)
    {
        valor = rand() % 1000;
        m[i][j] = valor;
        if (m[i][j]!=0)
        {
            printf(" Indice %d coluna %d  valor %d  ",i,j,valor);
        }
     printf ("\n");   
    }
    
   }
   
    return 0;
}
