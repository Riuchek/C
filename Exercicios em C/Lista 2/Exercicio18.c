#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    /*Escreva um programa que leia todos os elementos de uma matrix 4x4, em seguida mostre a matriz e constitua sua matriz transposta*/
    int i;
    int j;
    int matriz[4][4];
    int mT[4][4];
    printf("Matriz\n");
    for (i = 0; i <4; i++)
    {
        for (j = 0; j <4; j++)
        {
        matriz[i][j] = rand()%10;
        printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
        printf("Transposta\n ");
   for (i = 0; i <4; i++)
    {
        for (j = 0; j <4; j++)
        {
        mT[j][i] = matriz[i][j];
        }
    }
    for (i = 0; i <4; i++)
    {
        for (j = 0; j <4; j++)
        {
        printf("%d ",mT[i][j]);
        }
        printf("\n");
    }
    return 0;


}
