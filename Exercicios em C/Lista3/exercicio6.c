#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* Crie um programa que gere dois vetores de 20 posicoes A e B com numeros aleatorios entre 0 e 50. Crie um  vetor C com os elementos unicos sem repeticao dos vetores A e B 
    ordenado de forma crescente
     */
    int a[20]; 
    int b[20];
    int i;
    int aux=0;
    int c[50];
    for (i = 0; i <20; i++)
    {
        a[i]=rand()%50;
        b[i]=rand()%50;
    }
    for (i = 0; i <20; i++)
    {
        for (int j = 0; j <20; j++)
        {   
            
            if (a[i] != b[j] && a[i] != -1)
          {
             c[aux++] = a[i];
          }  
            else if (b[j] != -1)
          {
            c[aux++] = b[j];
          }          
        } 
    }
    for (i = 0; i <50; i++)
    {
      printf("%d ",c[i]);
    }
    
    
        
    return 0;
}
