#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* construa em C armazeen 15 numeros em um vetor e imprima listagem numerada contendo o umero e a mensagem par ou impar */
    int i;
    int vetor[15];
    for (i = 0; i <15; i++)
    {
    vetor[i]=rand();
    }
    for (i = 0; i <15; i++)
    {
    if (vetor[i]%2==0)
    {
        printf("%d %d par\n",i+1,vetor[i]);
    }
    if (vetor[i]%2==1)
    {
        printf("%d %d impar\n",i+1,vetor[i]);
    }  
    }
    
    
    return 0;
}
