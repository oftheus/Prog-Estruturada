/* 

11) Elabore um programa que, dado 2 vetores inteiros de 20 posi��es, efetue as respectivas
opera��es indicadas por um terceiro vetor de caracteres de 20 posi��es tamb�m fornecido pelo
usu�rio, contendo as quatro opera��es aritm�ticas em qualquer combina��o, armazenando os
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
		printf("Digite o %d� n�mero do Vetor 1: ",i+1);
		scanf("%d",&n1[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < TAM ; i++){
		printf("Digite o %d� n�mero do Vetor 2: ",i+1);
		scanf("%d",&n2[i]);
	}
	
	printf("\n");

	for ( i=0; i<TAM ; i++ ){
		printf("Digite a %d� opera��o: ",i+1);
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
