#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*4 Crie um programa que gere 20 numeros aleatorios, armazene em um vetor, e os exiba em ordem inversa  */
    srand(time(NULL));
    int v[20];
    int i; 
    printf ("Ordem normal \n");
    for (i = 0; i <20; i++)
    {
        v[i] = rand();
        printf ("%d ",v[i]);
    }
    printf("\n");
    printf ("Inversa\n");
    for (i =19; i>=0; i--)
    {
        printf ("%d ",v[i]);
    }
    
    
    return 0;
}
