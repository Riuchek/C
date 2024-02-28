#include <stdio.h>

int main(void)
{
   //Faça um programa que solicite a o usuário para digitar 10 valores e some-os.
   int Soma=0;
   int v;
   int i;
   for (i = 0; i <10; i++)
   {
    printf("Digite  um valor: ");
    scanf("%d",&v);
    Soma=Soma+v;
   }
   printf("\n A soma final é de %d",Soma);
   return 0;
}