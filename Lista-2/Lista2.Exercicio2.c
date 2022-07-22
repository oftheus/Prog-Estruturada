/* 

2) Faça um programa que calcule e imprima a soma dos n primeiros números naturais
ímpares. O usuário do programa deve fornecer quantos números devem ser somados.

*/

#include <stdio.h>
#include <locale.h>

void Soma(int n){
	
	int soma, i;
	
	for(i = 0; i <= n*2; i++){
		
		if (i % 2 == 1){
			soma += i;
		}
	}
		
	printf("A soma dos %d primeiros números ímpares é: %d.\n", n, soma);
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n, soma;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	Soma(n);
	
	return 0;
}
