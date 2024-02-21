#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int valor = 10;
	printf("valor da variavel %d\n",valor);
	int dobro = valor*2;
	printf("o dobro de %d eh %d",valor,dobro);
	int n1,n2;
	printf("\nDigite o valor 1: ");
	scanf("%d",&n1);
	printf("\nDigite o valor 2: ");
	scanf("%d",&n2);	
	int som = n1+n2;
	printf("\n A soma e: %d",som);
	int val=9;
	printf("\nValor %d",val);
	val--;
	printf("\nValor %d",val);
	--val;
	printf("\nValor %d",val);
	int i; 
	int pos,neg,ProdSoma,par,impar,somapar,somaimpar,J,G;
	J=0;
	G=0;
	somapar=0;
	somaimpar=0;
	pos=0;
	neg=0;
	for(i=-50;i<=100;i++){
		if(i%2==0){
		somapar=somapar+i;	
		}
		else{
		somaimpar=somaimpar+i;	
		}
		if(i%6==0){
			printf("\n%d",i);
		}
		if(i<=0){
			pos=pos+i;
			J++;
		}	
		else{
			G++;
			neg=neg+i;
		}
	}
	int mediapositivo = pos/J;
	printf("\n Media dos numeros positivos %d",mediapositivo);
	int medianegativo = neg/G;
	printf("\n Media dos numeros negativos %d",medianegativo);
	ProdSoma=somapar*somaimpar;
	printf("\n Valor do produto do par e impar eh %d",ProdSoma);
	return 1;
}
