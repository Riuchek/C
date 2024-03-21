#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* 
    crie uma estrutura representando os aluno sde um curso
    A estrutura deve conter a matricula do aluno 
    nome, notta da 1 2 e 3 prova


    a permita ao usuario entrar com os dados de 5 alunos
    b encontre o aluno com a maior nota d aprimeira prova
    c encontra o aluno com maior media geral
    d encontre o aluno com menor media geral
    e para cada aluno diga se ele foi aprovado ou nao media 6
     */
    srand(time(NULL));
    struct alunos
    {
        int matricula;
        char nome[40];
        double n1,n2,n3;
    };
    typedef struct alunos Aluno;
    Aluno listaAluno[5];
    int i;
    double media[5];
    double MaiorMedia;
    double MaiorNota;
    double MenorMedia;
    int indexNota;
    int indexMedia;
    int indexMenor;
    for (i = 0; i <5; i++)
    {
        listaAluno[i].matricula = i+1;
        printf("Digite o nome do aluno \n");
        scanf("%s",&listaAluno[i].nome);
        listaAluno[i].n1 = rand()%10;
        listaAluno[i].n2 = rand()%10;
        listaAluno[i].n3 = rand()%10;   
    }
    for (i = 0; i <5; i++)
    {
       media[i] = (listaAluno[i].n1+listaAluno[i].n2+listaAluno[i].n3)/3;
    }
    for (i = 0; i <5; i++)
    {
        if (media[i]>=6)
        {
            printf("Aluno %d Aprovado \n",listaAluno[i].matricula);
        }
        else
        {
            printf("Aluno %d Reprovado \n ",listaAluno[i].matricula);
        }
        
       if (i==0)
       {
            MaiorMedia=media[i];
            MaiorNota=listaAluno[i].n1;
            MenorMedia=media[i];
            indexMedia = i;
            indexMenor = i;
            indexNota = i;
       }
       if (media[i]>MaiorMedia)
       {
        MaiorMedia=media[i];
        indexMedia = i+1;
       }
       if (listaAluno[i].n1>MaiorNota)
       {
         MaiorNota = listaAluno[i].n1;
         indexNota = i+1;
       }
       if (media[i]<MenorMedia)
       {
        MenorMedia = media[i];
        indexMenor = i+1;
       }
    } 
    for (int j = 0; j <5; j++)
    {
        if (indexNota==listaAluno[j].matricula)
        {
        printf("Maior nota da primeira prova %s  ",listaAluno[j].nome);
        }
        if (indexMedia==listaAluno[j].matricula)
        {
        printf("Maior media Geral: %s  ",listaAluno[j].nome);
        }
        if (indexMenor==listaAluno[j].matricula)
        {
        printf("Menor media %s  ",listaAluno[j].nome);
        }
        
    }
    
      
    printf("\n \n Maior nota da primeira prova %f  Menor media %f  Maior Media geral %f",MaiorNota,MenorMedia,MaiorMedia);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    return 0;
}
