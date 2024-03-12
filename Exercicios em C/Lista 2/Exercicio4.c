#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
    Faça um programa que armazene 8 numeros em um vetor e imprima todos 
    os numeros. Ao final, imprima o total de numeros multiplos de seis
    */
   int i;
   int total[8];
   for ( i = 0; i <8; i++)
   {
    total[i] = rand();
    printf("%d \n",total[i]);
   }
   for ( i = 0; i <8; i++)
   {
    if (total[i]%6==0)
    {
        printf("Multiplo de 6 %d \n",total[i]);
    }
    
   }
   
    return 0;
}
