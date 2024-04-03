#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void  inSort(int *v, int n){
	int i,j,aux;
	for(i=1;i<n;i++){
		aux= v[i];
		for(j=i;(j>0)&& (aux < v[j-1]);j--){
			v[j]=v[j-1];
		}
		v[j]=aux;
	}
}
int buscaLinear(int *v,int n, int elem){
	int i;
	for (i = 0;i<n;i++){
		if(elem==v[i]){
			return i;
		}
	}
	return -1;
}
int buscaOrdenada(int *v, int n, int elem){
	int i;
	for(i=0;i<n;i++){
		if(elem==v[i])
			return i;
		else
		    if(elem<v[i])
				return -1;	
	}
	return -1;
}
int buscaBinaria(int *v, int n, int elem){
	int i,inicio,meio,final;
	inicio=0;
	final = n-1;
	while (inicio<=final){
		meio = (inicio+final)/2;
		if(elem<v[meio]){
			final=meio-1;	
		}
		else
			if(elem>v[meio])
				inicio=meio+1;
			else
				return meio;		
	}
	return -1;
}
int main() {
	clock_t inicio,fim;
	int i;
	int tamanho = 100000;
	int v[tamanho];
	for(i=0;i<tamanho;i++){
		v[i]=rand() %50;
	}
	inicio = clock();
	inSort(&v,tamanho);
	fim = clock();
	double totalSort = (double) (fim - inicio)/CLOCKS_PER_SEC;
	for(i=0;i<tamanho;i++){
		printf("%d ",v[i]);
	}
	printf("\n Tempo: %f", totalSort);
	return 0;
}
