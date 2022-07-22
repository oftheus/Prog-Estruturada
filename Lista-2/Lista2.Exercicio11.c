/* 

11) Faça um algoritmo para ler dois números inteiros e calcular e mostrar o valor
resultante se elevarmos a base representada pelo primeiro à potência representada pelo
segundo. Dica: busque qual a função que faz a potenciação.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n1,n2;
	double potencia;
	
	printf("Digite a Base e o Expoente: ");
	scanf("%d %d",&n1, &n2);	
	
	potencia = pow(n1,n2);
	
	printf("\nO resultado da Potenciação é: %.1f\n",potencia);
	
	return 0;
}
