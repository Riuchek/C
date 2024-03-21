#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
   /*
   raiz     1/n-1*Somatoria(v[i]-m)2
   
   */
  int i;
  int j[100];
  double media;
  double somatorio=0;
  double soma=0;
  double desvio;
  for (i = 0; i <100; i++)
  {
    j[i]=rand();
  }
  for (i = 0; i <100; i++)
  {
    soma = soma + j[i];
  }
  media=soma/100;
  for (i = 0; i <100; i++)
  {
    somatorio=somatorio+((j[i]-media)*(j[i]-media));
  }
  desvio=sqrt((1/100-1)+somatorio);
    printf("%f",desvio);
    return 0;
}
