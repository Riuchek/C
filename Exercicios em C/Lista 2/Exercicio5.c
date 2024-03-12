#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
    Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos
    a - Calcule e armazene a media
    b - armazene a situacao do aluno 1- aprovado 2- reprovado
    c - ao final do programa deve imprimir uma listagem contendo as notas
    a media e a situacao de cada aluno em formato tabulado

    Utilize quantos vetores forem ncessarios
    */
   int i;
   int j;
   float  nota[15][2];
   float media;
   for ( i = 0; i <15; i++)
   {
        for ( j = 0; j <2; j++)
        {
            nota[i][j] =rand()%10;
        }
   }
   for ( i = 0; i <15; i++)
   {
    media = (nota[i][1]+nota[i][0])/2;
    if (media>=6)
    {
        printf("\n-------------------------");
        printf("\nAluno: %d Media: %f Aprovado ",i+1,media);
    }
    else
    {
        printf("\n-------------------------");
        printf("\nAluno: %d Media: %f Reprovado ",i+1,media);
    }
   }
    return 0;
}
