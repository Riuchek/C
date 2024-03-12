#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*faça um programa que leia 10 numeros inteiros, armazene em um vetor, solicite um valor refencia inteiro e 
    a imprima os numeros do vetores que sao maiores que o referencia
    b retorne quantos numeros armazenados no vetor sao menores que o valor de referencia
    c retorne quantas vezes o valor de referencia aparece no vetor
    */
   int i;
   int v[10];
   int referencia;
   int qtde=0;
   int aparece=0;
   for (i = 0; i <10; i++)
   {
    v[i]=rand();
   }
   printf("Digite um numero para ser o referencial: \n");
   scanf("%d",&referencia);
   for (i = 0; i <10; i++)
   {
    if (referencia==v[i])
    {
        aparece++;
    }
    
    if (referencia<v[i])
    {
        printf("Eh maior que a referencia o numero %d \n",v[i]);
    } 
    if (referencia>v[i])
    {
        qtde++;
    }
    
   }
   printf("%d numero(s) menores que o valor referencial \n",qtde);
   printf("%d aparece o valor referencial no vetor \n",aparece);
   
    return 0;
}
