#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* 1 faça um programa que leia 10 numeros inteiros, armazene-os em um vetor, solicite um valor de referencia inteiro e 
    a imprima os numeros do vetor que sao maiores que o valor referencia
    b retorne quantos numeros armazenados no vetor sao menores que o valor de referencia
    c retorne quantas vezes o valor de referencia aparece no vetor
    d gere um segundo vetor vetor, com 50 posicoes e
        contabilize quantas vezes, cada numero informado elo usuario consta no segundo vetor
        calcule o % de numero do vetor de 50 posicoes que constam no primeiro
     */
     srand(time(NULL));
	int i;
	int j;
	int quantas=0;
	int v[10];
	int m[50];
	int referencia;
	int menor=0;
	int consta=0;
	int porcentagem=0;
	referencia=rand()%100;
	for(j=0;j<50;j++){
		m[j]=rand()%100;
	}
	for(i=0;i<20;i++)
	{
		v[i]=rand()%100;
		if(v[i]>referencia){
			printf("%d \n",v[i]);
		}
		if(v[i]<referencia){
			menor++;
		}
		if(v[i]==referencia){
			quantas++;
		}
		for(j=0;j<50;j++){
			if(referencia==m[j]){
			consta++;
			}
			if(v[i]==m[j]){
			porcentagem++;
			}
	}	
	}
	float media;
	media=(50/porcentagem);
	printf("numeros menores que a referencia %d \naparece o mesmo numero no vetor %d vezes \nConsta %d no segundo vetor\n",menor,quantas,consta);
	printf("\n %f",media);
    return 0;
}
