#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Escreva um programa que inicialize uma matriz 10x10 com 0 em todas as posições.
    O usuario ira digitar o indice da linha e o indice da coluna e em seguida o valor das posicoes.
    A leitura sera feita enquanto os indices nao forem negativos
    apos a leitura imprima a matriz na tela
    
    */
    int m[10][10]; 
    int i;
    int j;
    int lin,col;
    for (i = 0; i <10; i++)
    {
        for ( j = 0; j <10; j++)
        {
            m[i][j] = 0;
        printf("%d ",m[i][j]);
        }
     printf("\n");   
     //FUI GENIO AUQI TA
    }
    do
    {
        printf("Digite o indice da linha");
        scanf("%d",&lin);
        printf("Digite o indice da coluna");
        scanf("%d",&col);
        m[lin][col]=rand();

    } while (lin>0);
    for (i = 0; i <10; i++)
    {
        for ( j = 0; j <10; j++)
        {
            printf("%d ",m[i][j]);
        }
       printf("\n"); 
    }
    
    
    return 0;
}
