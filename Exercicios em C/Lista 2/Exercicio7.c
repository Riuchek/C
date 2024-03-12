#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    /* 
    Crie um programa que leia o preço de compra e o preco da venda 
    de 100 mercadorias(utilize vetores).Ao final, o programa devera imprimir 
    quantas mercadorias proporcionam:
    a -  lucro<10%
    b - 10% <= lucro <= 20%
    c -  lucro > 20%
    */
   int i;
   int compra[100];
   int venda[100];
   int margem;
   int lucroBaixo=0;
   int lucroMedio=0;
   int lucroAlto=0;
   for (i = 0; i <100; i++)
   {
    compra[i]=rand();
    venda[i]=compra[i]+rand();
    //EU FUI GENIAL DEMAIS MEU DEUS 
    // nao calma la palmas pra mim, puta que pariu minha mente explodiu
   }
   for (i = 0; i <100; i++)
   {
    //agora fiquei burro
    margem = (venda[i]-compra[i])/compra[i]*100;
    if (margem<10)
    {
        lucroBaixo++;
    }
    if (margem>=10&&margem<=20)
    {
        lucroMedio++;
    }
    if (margem>20)
    {
        lucroAlto++;
    }
   }
   printf("Lucro Baixo: %d\n Lucro Medio: %d\n Lucro Alto: %d",lucroBaixo,lucroMedio,lucroAlto);

    return 0;
}
