/* 

3) Faça um programa que imprima os n primeiros termos da série de Fibonacci,
lembrando que esta série é definida da seguinte forma:
termo1 = 1
termo2 = 1
termon = termon-1 + termon-2
O usuário do programa deve fornecer o número de termos, e estes devem ser impressos
separados por um espaço. 
Por exemplo, se o usuário pedir os 6 primeiros termos da série
de Fibonacci, o programa deve ter a seguinte saída:
1 1 2 3 5 8 

*/

#include <stdio.h>
#include <locale.h>

void Fibonacci(int n){
	
	int termo1, termo2, termon, i;

    termo1 = 0;
    termo2 = 1;
    
	printf("\nSérie de Fibonacci:\n");
    printf("%d ", termo2);

    for(i = 0; i < n-1; i++) {

        termon = termo1 + termo2;
        termo1 = termo2;
        termo2 = termon;

        printf("%d ", termon);
	}
}

int main(){
    setlocale(LC_ALL, "Portuguese");

	int n;
	
    printf("Digite um número: ");
    scanf("%d", &n);
    
    Fibonacci(n);
    
    return 0;
}
