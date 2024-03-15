#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);

*/


    //1 -  print soma
    int INDICE= 13;
    int soma=0;
    int k=0;
    do
    {
        k+=1;
        soma = soma + k;
        printf("%d   ",soma);
    } while (k<INDICE);
    
    printf("O resultado final : %d \n",soma);



    return 0;
}
