#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    /* 
    Faça um programa em C que armazene 15 numeros inteiros em um vetor e depois permita
    que o usuario digite um numero inteiro para ser buscado no vetor, se for encontrado o programa
    deve imprimir a posicao desse numero no vetor, caso contrario, deve imprimir a mensagem
    "Não encontrado"
    */




   //Testar para encontrar com numero 1
   // Testar com numeros ate 20 por favor
   int num[15];
   int i;
   int busca;
   bool achou = false;
   for (i = 0; i <15; i++)
   {
    num[i]= rand()%20;
   }
   printf("Digite um numero a ser buscado \n");
   scanf("%d",&busca);
   for (i = 0; i <15; i++)
   {
    if (busca==num[i])
    {
        printf("Numero encontrado na posicao %d\n",i);
        achou = true;
    }
    
   }
   if (achou==false)
   {
    printf("Nao encontrado \n");
   }
   
    return 0;
}
