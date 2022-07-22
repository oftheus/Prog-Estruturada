/* 

10) Implemente um programa que chame a fun��o m�dia com o seguinte prot�tipo:
float media(int n, float *v)

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(int n, float *v){

	float s = 0, m;
	int i;

	for (i = 0; i < n; ++i) {
			s = s + v[i];
	    }

	m = s / n;

	return m;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

	float *v, med;
    int n, i;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);
    printf("\n");

    v = (float *)malloc(n * sizeof(float));

    if(v == NULL){
    	printf("Erro!\n");
    	return 1;
	}

	for (i = 0; i < n; ++i) {
		printf("Digite o %d� valor: ",i+1);
		scanf("%f",&v[i]);
    }

	med = media(i,v);

	printf("\nM�dia = %.2f\n",med);

	return 0;
}

