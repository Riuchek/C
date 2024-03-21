#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* obter discrepancia e varianca de uma amostra relativa
    aos chutes livres ao gol convertidos em acertos
    
    tais chutes sao feitos por jogadores
     */
    int i;
    srand(time(NULL));
    int jogador[11];
    int acerto[11];
    float xi[11];
    float xiQ[11];
    float soma=0.0;
    float media=0.0;
    float variancia=0.0;
    for (i = 0; i < 11; i++)
    {
        jogador[i]=i+1;
        acerto[i]=rand()%10;
        soma = soma+acerto[i];
    }
    media = soma/11;
    for (i = 0; i <11; i++)
    {
        xi[i]=acerto[i]-media;
        xiQ[i]=xi[i]*xi[i];
        variancia=variancia+xiQ[i];
    }
    printf("Jogador,Acerto,xi,xi^2\n");
    for (i = 0; i < 11; i++)
    {
    printf("\n%d %d %f %f", jogador[i],acerto[i],xi[i],xiQ[i]);
    }
    printf("\nVariancia: %f" ,variancia);
    return 0;
}
