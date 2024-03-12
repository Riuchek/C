#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i;
	int v[100];
	int Maior=0;
	int Menor=0;
	int Pares=0;
	double Per=0;
	int Soma=0;
	double Media=0;
	for(i=0;i<100;i++){
		v[i]=rand();
		Soma+=v[i];
		if(v[i]%2==0){
			Pares++;
		}
		if(i==0){
		Maior=v[i];
			Menor=v[i];

		}
		if(v[i]<Menor){
			Menor=v[i];

		}
		if(v[i]>Maior){
			Maior=v[i];
		}
	}
	Media=Soma/100;
	Per=(Pares/100);
	printf("Maior %d  Menor %d  Percentual Pares %f  Media %f",Maior,Menor,Per,Media);
	return 0;
}