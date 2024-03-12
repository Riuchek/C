#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Leia duas matrizes 2x3 de numeros double.
    Imprima a soma destas duas matrizes.
    */
   int i;
   int j;
   double v1[2][3];
   double v2[2][3];
   double soma[2][3];
   for (i = 0; i <2; i++)
   {
    for (j = 0; j <3; j++)
    {
        v1[i][j]=(float)rand();
        v2[i][j]=(float)rand();
        soma[i][j]=v1[i][j]+v2[i][j];
    }
   }
   for (i = 0; i <2; i++)
   {
    for (j = 0; j <3; j++)
    {
        printf("Linha %d coluna %d %f \n",i+1,j+1,soma[i][j]);
    }
   }
   
    return 0;
}
