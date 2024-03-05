#include <stdio.h>
#include <stdlib.h>
struct endereco{
	char rua[100];
	int numero;
};

struct aluno{
	int num_aluno;
	char nome[50];	
	float media;
	struct endereco endereco;
};
	
int main() {
//	struct nota a1;
//	struct nota a2={1,"joao",10};
//	printf("Codigo:");
//	scanf("%d",&a1.num_aluno);
//	printf("\nNome: ");
//	scanf("%s",&a1.nome);
//	printf("\nMedia: ");
//	scanf("%f",&a1.media);
//	printf("Dados do KERIDO\n");
//	printf("Codigo: %d \n",a1.num_aluno);
//	printf("Nome: %s \n",a1.nome);
//	printf("Media: %f \n",a1.media);	
	struct aluno listaAlunos[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n Codigo: ");
		scanf("%d",&listaAlunos[i].num_aluno);
		printf("\n Nome: ");
		scanf("%s",&listaAlunos[i].nome);
		printf("\n Media: ");
		scanf("%f",&listaAlunos[i].media);
		printf("Numero da rua \n");
		scanf("%d",&listaAlunos[i].endereco.numero);
		printf("Nome do endereço \n");
		scanf("%s",&listaAlunos[i].endereco.rua);
	}	
	for(i=0;i<5;i++){
		printf("\n Codigo: %d",listaAlunos[i].num_aluno);
		printf("\n Nome: %s ",listaAlunos[i].nome);
		printf("\n Media: %f",listaAlunos[i].media);
		printf("\nNumero da rua %d",listaAlunos[i].endereco.numero);
		printf("\nNome do endereço",listaAlunos[i].endereco.rua);
		
	}	
	
	return 0;
}


