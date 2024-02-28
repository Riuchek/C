#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*
	int v[20];
	int i;
	for(i=0;i<20;i++){
		printf("Digite o %d valor ",i +1);
		scanf("%d",&v[i]);
		printf("E o seu dobro eh %d \n",v[i]*2);

	}	
*/

/*
	int a[20];
	int c[20];
	int b[20];
	int i;
	int SomaC=0;
	int MediaC=0;
	int MultiploA=0; int MultiploB=0;int MultiploC=0;
	for(i=0;i<20;i++){
		a[i]=rand() % 100;
		if (a[i]%7==0){
		MultiploA++;	
		}
		b[i]=rand() % 100;
		if (b[i]%7==0){
		MultiploB++;	
		}
	}	
	for(i=0;i<20;i++){
		c[i]=a[i]+b[i];	
		if (c[i]%7==0){
		MultiploC++;	
		}
		SomaC=SomaC + c[i];
	}
		printf("A + B = C \n");
	for(i=0;i<20;i++){
		printf("%d + %d = %d \n",a[i],b[i],c[i]);
	}
	MediaC = SomaC/20;
	printf("Existe %d multiplos de 7 no vetor A, %d multiplos no vetor B e %d multiplos no vetor C\n",MultiploA,MultiploB,MultiploC);
	printf("A media da soma dos numeros de C eh %d",MediaC);
*/

	#include <time.h>
	srand(time(NULL));
	int matriz[10][10];
	int somaColunas[10];
	int somaLinhas[10];
	int i,j;
	for(i=0;i<100;i++){
		for (j = 0;j<50;j++){
			matriz[i][j]=rand()%100;		
		}
	}
	
	return 0;
}


