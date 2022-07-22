/* 

5) Implemente a fun��o max_vet, que recebe como par�metro um vetor de n�meros de ponto
flutuante (vet) de tamanho n e retorna o maior n�mero armazenado nesse vetor. Essa fun��o deve
obedecer o prot�tipo: float max_vet (int n, float * vet);
Fa�a tamb�m a fun��o main.

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
		printf("Digite o %d� valor: ",i+1);
		scanf("%f",&vet[i]);
    }

    maior = max_vet(n,vet);

	printf("\nMaior n�mero do vetor: %.2f\n",maior);

    free(vet);
	return 0;
}

