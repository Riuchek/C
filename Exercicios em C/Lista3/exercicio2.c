#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    /* Gere um vetor de W de 100 posicoes de valores inteiros, gerados de modo randomico entre 0 e 1000, verifique e exiba, os numeros primos cotidos no vetor W */
    int i;
    int j;
    int W[1000];
    for (i = 0; i <1000; i++)
    {
        W[i] = rand() % 1000;
    }
    for (i = 0; i <1000; i++)
    {
        int Primo = 1;
        if(W[i] < 2)
        {
            Primo = 0;
        } 
        else
        {
            for(j = 2; j <= (int)sqrt(W[i]); j++)
            {
                if(W[i] % j == 0)
                {
                    Primo = 0;
                    //exit ();
                    break;
                }
            }
        }

        if(Primo)
        {
            printf( "Numero primo %d \n",W[i]);
        }
    }
        
    
    
    return 0;
}
