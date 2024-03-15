#include <stdio.h>
#include <stdlib.h>
int main()
{
 /*
5) Escreva um programa que inverta os caracteres de um string.


IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
*/
    //agora eu me arrependo de fazer isso em C....
    char nome[7]="redruM";//REFERENCIAS A 21 SAVAGE E O ILUMINADO nota10
    char nomeReverso[7];
    int i;
    int contRev=7;
    //em C pode ser tanto a frase grandona com String
    for (i = 0; i <7; i++)
    {
      //quanto por vetor = MAIS FACIL AHHAHAHAHAHHAHAHAHHAHA C>Python.
      printf("%c",nome[i]);
    }
    printf("\n");
    for (i = 0; i <8; i++)
    {
      nomeReverso[i]=nome[contRev];
      contRev--;
      printf("%c",nomeReverso[i]);
    }
    //parabens joão, parabens! :)
    return 0;
  }
