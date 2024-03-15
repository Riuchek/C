#include <stdio.h>
#include <stdlib.h>
int main()
{
 /*
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/
    int a=0;
    int b=1;
    int i;
    int soma;
    int pedido;
    int cont=0;
    printf("Digite o numero a ser encontrado \n ");
    scanf("%d",&pedido);
    for (i = 0; i <pedido; i++)
    {
        soma = a + b;
        printf("%d   ",soma);
        a = b;
        b = soma;
        if (b==pedido){
            cont=1;
         }
    }
    if (cont==1)
    {
     printf("\n ebaa o numero foi encontrado na sequencia");
    }
    
    if (cont==0)
    {
        printf("\n ixi numero foi encontrado na sequencia");
    }
    
    return 0;
  }
