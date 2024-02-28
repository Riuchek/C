#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //faça um programa que receba dois numeros. Calcule e Mostre:
    //a soma dos numeros pares desse intervalo de numeros incluind os numeros digitados
    // a multiplicacao dos numeros impares desse intervalo, incluindo os digitados

    int numero1,numero2,i;
    int SomaPares=0;
    int MultiImparesIguais=0;
    int MultiImpares=1;
    printf("Digite o primeiro valor ");
    scanf("%d",&numero1);
    printf("Digite o segundo valor ");
    scanf("%d",&numero2);

    if (numero1==numero2)
    {
        if (numero1%2==0)
        {
            SomaPares =  numero1+numero2;
            printf("Soma dos pares é %d \n",SomaPares);
        }
        else
        {
            MultiImparesIguais = numero1*numero2;
            printf("o valor dess a multiplicacao é de %d \n",MultiImparesIguais);
        }  
    }
     // Calcule e Mostre:
    //a soma dos numeros pares desse intervalo de numeros incluind os numeros digitados
    // a multiplicacao dos numeros impares desse intervalo, incluindo os digitados
    if (numero1>numero2)
    {
        for ( i = numero2; i <=numero1; i++)
        {
            if (i%2 == 0)
            {
                SomaPares = SomaPares + i;
               
            }
            else{
                MultiImpares =MultiImpares * i ;
                
            }
            
        }
        printf("Soma dos numeros pares do intervalo  %d\n",SomaPares );
        printf("A multiplicacao dos numeros impares do intervalo foi %d \n",MultiImpares);
        
    }
    if (numero1<numero2)
    {
        for ( i = numero1; i <=numero2; i++)
        {
            if (i%2 == 0)
            {
                SomaPares = SomaPares + i; 
            }
            else{
                MultiImpares =MultiImpares * i ;    
            }      
        }
        printf("Soma dos numeros pares do intervalo  %d\n",SomaPares );
        printf("A multiplicacao dos numeros impares do intervalo foi %d \n",MultiImpares);
        
    }
    return 0;
}
