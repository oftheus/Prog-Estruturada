/* 

3) Fazer um programa que recebe um s�mbolo de opera��o do usu�rio (+, -, / ou *) e dois n�meros reais. 
O programa deve retornar o resultado da opera��o recebida sobre estes dois n�meros. 

*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	char operador;
	printf("Digite a opera��oo desejada: ");
	scanf("%f %c %f", &n1, &operador, &n2);
	
	switch(operador){
		
		case '+': printf(" %.2f + %.2f = %.2f", n1, n2, n1 + n2); break;
		case '-': printf(" %.2f - %.2f = %.2f", n1, n2, n1 - n2); break;
		case '/': printf(" %.2f / %.2f = %.2f", n1, n2, n1 / n2); break;
		case '*': printf(" %.2f * %.2f = %.2f", n1, n2, n1 * n2); break;
		default: printf("Opera��o inv�lida!\n"); break;	
	}
	
	return 0;
}
