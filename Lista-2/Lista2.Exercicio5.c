/* 

5) Escreva um programa em C para ler um valor X e um valor Z (se Z for menor que X
deve ser lido um novo valor para Z). Contar quantos números inteiros devemos somar em
sequência (a partir do X inclusive) para que a soma ultrapasse a Z o mínimo possível.
Escrever o valor final da contagem.
Exemplo:
X Z Resposta
3 20 5 (3+4+5+6+7=25)
2 10 4 (2+3+4+5=14)
30 40 2 (30+31=61)

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int x,z,cont = 0,soma = 0;
	
	printf("Digite o valor de X e de Z: ");
	scanf("%d %d",&x,&z);
	
	if (z < x){

		printf("Digite outro valor para Z: ");
		scanf("%d",&z);
	}
	
	while(soma < z){
		printf("%d ",x);
		soma += x;
		cont += 1;
		x += 1;
	}
	
	printf("\nSoma = %d",soma);
	printf("\n%d números inteiros.\n",cont);	
	
	return 0;
}
