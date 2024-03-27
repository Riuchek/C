#include <stdio.h>
#include <stdlib.h>	
void preencher(int *ponteiro,int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		ponteiro[i]=rand()%25;
	}
}
void imprimir(int *ponteiro,int tamanho){
	int i;
	for(i=0;i<tamanho;i++){	
		printf("%d \n",ponteiro[i]);	
	}
}
void bubble(int *v, int n){
	int i;
	int ordenado = 0;
	while(ordenado ==0){
	ordenado = 1;
		for(i=0;i<n-1;i++){
			if(v[i]>v[i+1]){
				int aux = v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				ordenado = 0;
		}
	}
  }
}
void sele(int *v,int n){
	int i,j,menor,troca;
	for(i=0;i<n-1;i++){
		menor = i;
		for(j=i+1;j<n;j++){
			if(v[j]<v[menor]){
				menor=j;
			}
		}
		if(i!=menor){
			troca=v[i];
			v[i]=v[menor];
			v[menor]=troca;
		}
	}
}
int main() {
	int tamanho=10;
	int array[tamanho];
	preencher(&array,tamanho);
	imprimir(&array,tamanho);
	sele(&array,tamanho);
	printf("___________________\n");
	imprimir(&array,tamanho);
	
	return 0;
}
