#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Faça um programa em C(jura?) que leia dois conjutos de numeros inteiros, cada um 10 elementos. Ao final o programa deve listar os elemtnso comuns aos conjuntos
    */
    int A[10];
	int B[10];
	int i;
	for(i=0;i<10;i++){
	A[i]=rand()%10;
	B[i]=rand()%10;
	if(A[i]==B[i]){
		printf("%d \n",A[i]);
	}
	}
	return 0;
}
