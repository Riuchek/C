#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Ler dois conjuntos de numeros reais, armazene em vetores e calcular o produto escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o produto escalar, sendo
    que o produto escalar é dado por: x1*y1 + x2*y2 + ... + xn * yn.


    JEOVA
    */

    int i;
    int soma=0;
    int A[5];
    int B[5];
    for (i = 0; i <5; i++)
    {
        A[i]=rand();
        B[i]=rand();
        soma = soma +(A[i]*B[i]);
        printf("x%d * y%d + ",i+1,i+1);
    }
    printf("\n Produto final = %d",soma);
    
    
    return 0;
}
