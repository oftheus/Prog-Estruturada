/* 

6) Implemente a fun��o maiores, que recebe como par�metro um vetor de n�meros inteiros (vet) de
tamanho n e um valor x. A fun��o deve retornar quantos n�meros maiores do que x existem nesse
vetor. Essa fun��o deve obedecer ao prot�tipo:
int maiores(int n, int * vet, int x);

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiores(int n, int * vet, int x){

	int resp = 0, i;

    for (i = 0; i < n; ++i){
		if(x < vet[i]){
			resp ++;
		}
    }
    return resp;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, x, i, resposta;
    int *vet;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (int *)malloc(n * sizeof(int));

    if(vet == NULL){
    	printf("Erro!\n");
    	return 1;
	}

	for (i = 0; i < n; ++i) {
		printf("Digite o %d� valor: ",i+1);
		scanf("%d",&vet[i]);
    }

    printf("Entre um valor: ");
    scanf("%d", &x);

    resposta = maiores(n, vet, x);

    printf("\nO vetor possui %d numeros maiores que %d.\n", resposta, x);

    free(vet);
    return 0;
}
