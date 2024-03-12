#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
   Construa um programa que permita armazenar o salario de 20 pessoas.
   Calcular e armazenar o novo salario sabendo-se que o reajuste foi de 8%
   Imprimir uma listagem numerada com o salario e novo salario
   Declare quantos vetores forem necessarios.
    */
   int i;
   int salario[20];
   int novoSalario[20];
    for ( i = 0; i <20; i++)
    {
        salario[i]=rand()%10000+1000;
        novoSalario[i] = salario[i]*1.08;
    }
    for (i = 0; i <20; i++)
    {
        printf("%d - %d -> %d\n",i+1,salario[i],novoSalario[i]);
    }
    return 0;
}
