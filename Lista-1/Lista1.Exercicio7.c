/* 

7) Fa�a opera��es de arredondamento para cima e para baixo com n�meros float.
Dica: Pesquise o documento �Cart�o de Refer�ncia da Linguagem C� para encontrar quais
fun��es devem ser usadas no programa. 

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um n�mero float: ");
	scanf("%f",&num);
	
	printf("N�mero arredondado pra cima: %.2f\n",ceil(num));
	printf("N�mero arredondado pra baixo: %.2f\n",floor(num));

	return 0;
}

