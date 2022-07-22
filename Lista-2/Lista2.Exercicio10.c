/* 

10) O maior divisor comum (MDC) de dois n�meros inteiros � o maior n�mero inteiro
que faz uma divis�o exata (com resto zero) desses dois n�meros. Por exemplo, o MDC de
32 e 40 � 8, o MDC de 9 e 27 � 9 e o MDC de 13 e 25 � 1. Implemente uma fun��o que
receba como par�metros dois n�meros inteiros x e y e calcule o MDC desses n�meros.
Essa fun��o deve ter o seguinte prot�tipo:
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
	
	printf("Digite dois n�meros: ");
	scanf("%d %d",&x ,&y);
	
	result = mdc(x,y);
	printf("O MDC �: %d \n",result);
	
	return 0;
}
