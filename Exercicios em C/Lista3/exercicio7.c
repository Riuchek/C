#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*
    crie um programa gerador de tabuada, o usuario devera
    informar o numero do qual deseja a tabuada e a saida
    esperada devera ser
    digite um nuero
    digite a tabuada para geracao do 3
    tabuada do 3 
    soma: 
    3 + 0 = 3
    3 + 1...
    ...
    multiplicacao
    3 x 0 = 0
    3 x 1=..
    ....
     */
    srand(time(NULL));
    int i;
    int numero= rand()%10;
    int soma;
    int multi;
    printf(" soma do %d\n",numero); 
    for (i = 0; i <=10; i++)
    {   
     soma = numero + i;   
     printf("%d + %d = %d\n",numero,i,soma);  
    }
    printf("tabuada do %d\n",numero);
    for (i = 0; i <=10; i++)
    {
        multi = numero * i;
        printf("%d * %d = %d\n",numero,i,multi); 
    }
    
    return 0;
}
