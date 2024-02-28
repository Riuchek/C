#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor lido
    int i,valor;
    int Maior,Menor=0;
    for (i = 0; i <10; i++)
    {
        printf("Digite  um numero: ");
        scanf("%d",&valor);
        if (i==0)
        {
            Menor=0;
            Maior=0;
        }
        if (valor>Maior)
        {
            Maior=valor;
        }
        if (valor<Menor)
        {
            Menor=valor;
        }
        
    }
    printf("\n O maior valor é %d",Maior);
    printf("\n O menor valor é %d",Menor);
    return 0;
}
