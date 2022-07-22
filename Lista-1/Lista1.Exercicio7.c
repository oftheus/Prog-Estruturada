/* 

7) Faça operações de arredondamento para cima e para baixo com números float.
Dica: Pesquise o documento “Cartão de Referência da Linguagem C” para encontrar quais
funções devem ser usadas no programa. 

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um número float: ");
	scanf("%f",&num);
	
	printf("Número arredondado pra cima: %.2f\n",ceil(num));
	printf("Número arredondado pra baixo: %.2f\n",floor(num));

	return 0;
}

