#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Faça um programa que leia um numero inteiro N e depois imprima os N primeiros numeros naturais IMPARES
    int i,N;
    printf("Digite um numero: ",N);
    scanf("%d",&N);
    for (i = 0; i <N; i++)
    {
        if (i%2==1)
        {
            printf("\n %d",i);
        }
        
    }
    return 0;
}
