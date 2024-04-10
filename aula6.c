#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	int c = 10;
	int *p;
	p=&c;
	printf(" endereco de c %p \n",*p);
	printf("conteudo apontado por p: %d \n",*p);
	*p=12;
	int j = &p;
	printf("conteudo apontado por j: %p \n",j);
	printf("conteudo apontado por *p: %d \n",*p);
	printf("conteudo apontado por c: %d \n",c);
	
	int *p,*p1,x=10;
	float y=20.0;
	p=&x;
	printf("p : %d \n",*p);
	p1=p;
	printf("p1 : %d \n",*p1);
	p=&y;
	printf("p : %d \n",*p);
	printf("p : %f \n",*p);
	printf("p : %f \n",*((float*)p));
	int vet[5] = {1,2,3,4,5};
	int *p;
	p=vet;
	printf("3 elemento %d ou %d",p[2],*(p+2));
	*/ 
	
	/* 
	crie o seguinte struct:
	struct venda{
	int quantidade;
	float valorUnitario;
};
	a crie um array A com 10 posicoes para sturct venda
	b crie uma funcao que preencha o array;
	c crie um segundo array B de mesmo tamanho
	d crie uma funcao que permita replicar os dados de A para B
	e crie uma funcao que receba um variavel float totalvenda nesta variavel, por referencia compute o valor total vendido;
	*/
	struct venda{
		int quantidade;
		float valorUnitario;
	};
	typedef struct venda Venda;
	void vt(Venda *v, float *totalVenda,int n);
	void preencha(Venda *v,int n);
	void replica(Venda *v,Venda *r,int n);
	float media(Venda *v,int n);
int main() {
	Venda listaVenda[10];
	Venda listaVendaB[10];
	preencha(&listaVenda,10);
	replica(&listaVenda,&listaVendaB,10);
	float totalVenda;
	vt(&listaVenda,&totalVenda,10);
	printf("%f ",media(&listaVenda,10));
	return 0;
}
float media(Venda *v,int n){
	int i;
	int soma =0;
	float media=0.0;
	for(i =0;i<n;i++){
		media += v[i].quantidade;
	}
	return media/n;
}
void vt(Venda *v, float *totalVenda,int n){
int i;
*totalVenda = 0.0;
	for(i = 0;i<n;i++){
		*totalVenda += (float)v[i].quantidade*v[i].valorUnitario;
	}
	printf("\n O valor total desta venda foi %f \n",*totalVenda);
}
void replica(Venda *v,Venda *r,int n){
	int i;
	for(i = 0;i<n;i++){
		r[i].quantidade=v[i].quantidade;
		r[i].valorUnitario=v[i].valorUnitario;
		printf("\n %d    =    %d ",r[i].quantidade,v[i].quantidade);
	}
}
void preencha(Venda *v,int n){
	int i;
	for(i = 0;i<n;i++){
		v[i].quantidade=i+1;
		v[i].valorUnitario=rand()%7;
	}
}
