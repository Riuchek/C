#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
    faça um programa que armazene 10 letras em um vetor e imprima uma listagem
    numerada
    */
    char  letra[10];
    printf("Digite  as 10 letras:\n");
    scanf("%s", &letra);
    printf("%s",letra);
    int i;
    for ( i = 0; i <10; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
