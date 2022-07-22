/* 

3) Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. 
O programa deve retornar o resultado da operação recebida sobre estes dois números. 

*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	char operador;
	printf("Digite a operaçãoo desejada: ");
	scanf("%f %c %f", &n1, &operador, &n2);
	
	switch(operador){
		
		case '+': printf(" %.2f + %.2f = %.2f", n1, n2, n1 + n2); break;
		case '-': printf(" %.2f - %.2f = %.2f", n1, n2, n1 - n2); break;
		case '/': printf(" %.2f / %.2f = %.2f", n1, n2, n1 / n2); break;
		case '*': printf(" %.2f * %.2f = %.2f", n1, n2, n1 * n2); break;
		default: printf("Operação inválida!\n"); break;	
	}
	
	return 0;
}
