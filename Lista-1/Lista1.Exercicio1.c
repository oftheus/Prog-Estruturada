/* 

1) Fazer um programa para receber um número inteiro de segundos do usuário e imprimir
a quantidade correspondente em horas, minutos e segundos.

*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tempo, horas, minutos, segundos, resto;
	
	printf("Digite o tempo: ");
	scanf("%d",&tempo);
	
	horas = tempo / 3600;
	resto = tempo % 3600;
	
	minutos = resto / 60;
	segundos = resto % 60;
	
	printf("%dh:%dm:%ds\n", horas, minutos, segundos);
	
	return 0;
}
