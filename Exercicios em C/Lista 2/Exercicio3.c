#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
    Construa uma programa em C que armazena 15 numeros em um vetor
    e imprima uma listagem numerada contendo o numero e uma das
    mensagens: par ou impar
    */
    int i;
    int numeros[15];
    for (i = 0; i <15; i++)
    {
        numeros[i] = rand()%100;
    }
    for ( i = 0; i <15; i++)
    {
        if (numeros[i]%2==0)
        {
            printf("%d Par\n",numeros[i]);
        }
        else
        {
            printf("%d impar \n",numeros[i]);
        }
        
    }
    
    return 0;
}
