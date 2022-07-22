/* 

10) O maior divisor comum (MDC) de dois números inteiros é o maior número inteiro
que faz uma divisão exata (com resto zero) desses dois números. Por exemplo, o MDC de
32 e 40 é 8, o MDC de 9 e 27 é 9 e o MDC de 13 e 25 é 1. Implemente uma função que
receba como parâmetros dois números inteiros x e y e calcule o MDC desses números.
Essa função deve ter o seguinte protótipo:
int mdc (int x, int y);

*/

#include <stdio.h>
#include <locale.h>

int mdc(int x, int y){
	
	int resto;

    do {
        resto = x % y;

        x = y;
        y = resto;

    } while (resto != 0);

    return x;
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	int x,y,result = 0;
	
	printf("Digite dois números: ");
	scanf("%d %d",&x ,&y);
	
	result = mdc(x,y);
	printf("O MDC é: %d \n",result);
	
	return 0;
}
