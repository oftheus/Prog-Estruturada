/* 

11) Fa�a um algoritmo para ler dois n�meros inteiros e calcular e mostrar o valor
resultante se elevarmos a base representada pelo primeiro � pot�ncia representada pelo
segundo. Dica: busque qual a fun��o que faz a potencia��o.

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
	
	printf("\nO resultado da Potencia��o �: %.1f\n",potencia);
	
	return 0;
}
