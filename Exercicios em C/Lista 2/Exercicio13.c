#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    
    /*Faça um programa que calcule o desvio padrao d eum vetor V cointendo n=10 numeros, onde M é a media do vetor*/
    int i;
    float media;
    int soma=0;
    float aux=0;
    float desvio=0;
    float desviooo=0;
    int v[10];
    for (i = 0; i <10; i++)
    {
        v[10]=rand();
        soma+=v[i];
    }
    media = soma/10;
    printf("a media da: %f \n",media);
    for (i = 0; i <10; i++)
    {
        aux=(v[i]-media)*(v[i]-media);
    }
    desvio = aux/10;
    desviooo = sqrt(desvio);
    printf("o desvio padrao foi de %f \n",desviooo);
    //achoq ue eu errei a formula mas okay fiz oque entendi :)
    return 0;
}
