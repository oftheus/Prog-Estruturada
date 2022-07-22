/* 

11) Elabore um programa que, dado 2 vetores inteiros de 20 posições, efetue as respectivas
operações indicadas por um terceiro vetor de caracteres de 20 posições também fornecido pelo
usuário, contendo as quatro operações aritméticas em qualquer combinação, armazenando os
resultados num quarto vetor.

*/

#include <stdio.h>
#include <locale.h>

#define TAM 20

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i, n1[TAM], n2[TAM]; 
	char op[TAM+1];
	float resp[TAM];

	for(i=0; i<TAM ; i++){
		printf("Digite o %dº número do Vetor 1: ",i+1);
		scanf("%d",&n1[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < TAM ; i++){
		printf("Digite o %dº número do Vetor 2: ",i+1);
		scanf("%d",&n2[i]);
	}
	
	printf("\n");

	for ( i=0; i<TAM ; i++ ){
		printf("Digite a %dª operação: ",i+1);
		scanf("%s",&op[i]);
	}

	for ( i=0; i<TAM ; i++ ) {
		switch (op[i]){
		case '+':
			resp[i] = n1[i] + n2[i];
			break;
		case '-':
			resp[i] = n1[i] - n2[i];
			break;
		case '*':
			resp[i] = n1[i] * n2[i];
			break;
		case '/':
			resp[i] = n1[i] / n2[i];
			break;
		}

		printf("\n%d %c %d = %.2f",n1[i],op[i],n2[i],resp[i]); 
	}
	
	return 0;

} 
