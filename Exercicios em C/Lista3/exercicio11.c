#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*
    
    Construa um programa que permita armazenar o salario de 20 pessoas.
    Calcular e armazenar o novo salario sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada contendo:salario antigo
    novo salario, diferenca em valor; ao final mostre o total de cada coluna(vetor).Declare quantos vetores forem necessarios
     */
    int i;
    int salario[20];
    int novosalario[20];
    int diferenca[20];
    for (i = 0; i <20; i++)
    {
        salario[i]=rand();
    }
    for (i = 0; i <20; i++)
    {
        novosalario[i] = salario[i]*1.08;
    }
    for (i = 0; i <20; i++)
    {
        diferenca[i] = novosalario[i] - salario[i];
    }
    
    for (i = 0; i <20; i++)
    {
        printf("%d Salario:%d   Novo Salario:%d     Diferenca:%d \n",i+1,salario[i],novosalario[i],diferenca[i]);
    }
    
    
    return 0;
}
