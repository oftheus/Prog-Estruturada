/* 

5) Implemente a função max_vet, que recebe como parâmetro um vetor de números de ponto
flutuante (vet) de tamanho n e retorna o maior número armazenado nesse vetor. Essa função deve
obedecer o protótipo: float max_vet (int n, float * vet);
Faça também a função main.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float max_vet (int n, float * vet){

	float maior = vet[0];
	int i;

	for (i = 0; i < n; ++i) {
		if(maior < vet[i]){
			maior = vet[i];
		}
    }

	return maior;
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
    float *vet, maior;
    int i;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (float *)malloc(n * sizeof(float));

    if(vet == NULL){
    	printf("Erro!\n");
    	return 1;
	}

    for (i = 0; i < n; ++i) {
		printf("Digite o %dº valor: ",i+1);
		scanf("%f",&vet[i]);
    }

    maior = max_vet(n,vet);

	printf("\nMaior número do vetor: %.2f\n",maior);

    free(vet);
	return 0;
}

