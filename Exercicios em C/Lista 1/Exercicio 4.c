#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Ler uma sequencia de numeros inteiros e determinar se eles sao pares ou nao.Devera ser informado o numero de dados lidos em numero de valores pares
    //O processo termina quando for digitado o numero 1000
    int i=0;
    int Pares=0;
    int valor;
    do
    {
        printf("digite um numero \n");
        scanf("%d",&valor);
        if (valor % 2 == 0)
        {
            Pares++;
        }
        i=i+1;
    } while (valor !=1000);
    printf("O valor de numeros pares é %d e os numero de dados lidos foi de %d",Pares,i);
    
    return 0;
}
