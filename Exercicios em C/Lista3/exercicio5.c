#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* crie um programa que gere 2 vetores de 10 posicoes w e k aleatorios e calcule
    somatoria(w[i]+k[9-1])
      */
    int i;
    int soma=0;
    int w[10],k[10];
    for (i = 0; i <10; i++)
    {
        w[i]=rand()%10;
        k[i]=rand()%10;
    }
    for (i = 0; i <10; i++)
    {
    soma=soma+(w[i]+k[9-i]);
    }
    
    printf("a soma eh %d",soma);
    return 0;
}
