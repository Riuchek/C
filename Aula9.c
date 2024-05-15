#include <stdio.h>
#include <stdlib.h>


struct produto
{
    int codigo;
    int quantidade;
    float valorUnitario;
};

typedef struct produto Produto;

struct elemento
{
    Produto produto;
    struct elemento *anterior;
    struct elemento *proximo;
};

typedef struct elemento Elemento;

typedef struct elemento* Lista;

// Protótipos
Lista* criarLista();
int inserirInicio(Lista *lista, Produto novoProduto);
int inserirFim(Lista *lista, Produto novoProduto);
int removerInicio(Lista *lista);
int listaEhVazia(Lista *lista);
void imprimirListaProdutos(Lista *lista);
int removerFim(Lista *lista);
Produto* consultarProdutoPorCodigo(Lista *lista, int codigo);
int main()
{
    Produto p1 = {1, 10, 11.99};
    Produto p2 = {2, 5, 19.87};
    Produto p3 = {3, 20, 19.77};
    Produto p4 = {4, 1, 100.01};

    Lista *listaProdutos = criarLista();

//     inserirInicio(listaProdutos, p1);
//     inserirInicio(listaProdutos, p2);
//     inserirInicio(listaProdutos, p3);
//     inserirInicio(listaProdutos, p4);
    inserirFim(listaProdutos, p2);
    inserirFim(listaProdutos, p3);
    inserirFim(listaProdutos, p4);
    imprimirListaProdutos(listaProdutos);    
    removerInicio(listaProdutos);
    imprimirListaProdutos(listaProdutos);
	removerFim(listaProdutos);
	imprimirListaProdutos(listaProdutos);
	Produto *p = consultarProdutoPorCodigo(listaProdutos,4);
    if(p==NULL){
    	printf("\n Produto nao encontrado");
	}
	else{
		printf("\n\nProduto encontrado %d %d %f",p->codigo,p->quantidade,p->valorUnitario);
	}	
    return 0;
}

Lista* criarLista()
{
    Lista *lista = (Lista*) malloc(sizeof(Lista));

    if (lista != NULL)
    {
        *lista = NULL; // Lista vazia
    }
    return lista;
}

int inserirInicio(Lista *lista, Produto novoProduto)
{
    if (lista == NULL)
    {
        printf("Não existe lista");
        return 0;
    }

    Elemento *elemento = (Elemento*) malloc(sizeof(Elemento));

    if (elemento == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        return 0;
    }

    elemento->produto = novoProduto;
    elemento->proximo = (*lista);
    elemento->anterior = NULL;

    // Lista não é vazia
    if (*lista != NULL)
    {
        (*lista)->anterior = elemento;
    }

    *lista = elemento;

    return 1;
}

int inserirFim(Lista *lista, Produto novoProduto)
{
    if (lista == NULL)
    {
        printf("Inserir Fim: lista nao existe!!");
        return 0; // False
    }

    Elemento *elemento = (Elemento*) malloc(sizeof(Elemento));

    if (elemento == NULL)
    {
        printf("Inserir Fim: nao foi possivel alocar memoria :(");
        return 0; // False
    }

    elemento->produto = novoProduto;
    elemento->proximo = NULL; // Aponta para o fim

    // Lista eh vazia?
    if ((*lista) == NULL)
    {
        elemento->anterior = NULL;
        *lista = elemento;
    }
    else
    {
        Elemento *aux = *lista;
        // Procura ultimo elemento
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }

        aux->proximo = elemento;
        elemento->anterior = aux;
    }
    return 1;
}

int removerInicio(Lista *lista)
{
    if (listaEhVazia(lista))
    {
        return 0; // false nao removeu lista eh vazia
    }

    Elemento *aux = *lista;
    *lista = aux->proximo;

    if (aux->proximo != NULL)
    {
        aux->proximo->anterior = NULL;
    }

    free(aux);

    return 1; // True = sucesso removeu
}
int removerFim(Lista *lista)
{
    if (listaEhVazia(lista))
    {
        return 0; // false nao removeu lista eh vazia
    }

    Elemento *aux = *lista;
	 while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
	if(aux->anterior==NULL){
		*lista = aux->proximo;
	}
	else{
		aux->anterior->proximo = NULL;
	}
    free(aux);

    return 1; // True = sucesso removeu
}

int listaEhVazia(Lista *lista)
{
    if (lista == NULL)
    {
        return 1;
    }
    if ((*lista) == NULL)
    {
        return 1;
    }

    return 0;
}

Produto* consultarProdutoPorCodigo(Lista *lista, int codigo){
	if (listaEhVazia(lista))
    {
        return NULL ; // lista vazia
    }
    
	Elemento *aux = *lista;
	while(aux!=NULL && aux->produto.codigo != codigo){
		aux = aux->proximo;
	}
	if(aux==NULL){
		return NULL;
	}
	else{
		Produto *p = (Produto*)malloc(sizeof(Produto));
		p->codigo = aux->produto.codigo;
		p->quantidade = aux->produto.quantidade;
		p->valorUnitario = aux->produto.valorUnitario;
		return p;
	}
}
void imprimirListaProdutos(Lista *lista)
{
    if (lista == NULL)
    {
        printf("Imprimir: lista inexistente");
        return;
    }

    printf("\n..:: Lista de Produtos ::..");
    printf("\n Codigo | Qtd | ValorUni | Total");
    printf("\n--------------------------------");

    Elemento *aux = *lista;

    while (aux != NULL)
    {
        printf("\n%d\t%d\t%.2f\t%.2f\t", aux->produto.codigo, aux->produto.quantidade, aux->produto.valorUnitario, aux->produto.quantidade * aux->produto.valorUnitario);
        aux = aux->proximo;
    }
}
