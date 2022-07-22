/* 

3) Fa�a um programa que imprima os n primeiros termos da s�rie de Fibonacci,
lembrando que esta s�rie � definida da seguinte forma:
termo1 = 1
termo2 = 1
termon = termon-1 + termon-2
O usu�rio do programa deve fornecer o n�mero de termos, e estes devem ser impressos
separados por um espa�o. 
Por exemplo, se o usu�rio pedir os 6 primeiros termos da s�rie
de Fibonacci, o programa deve ter a seguinte sa�da:
1 1 2 3 5 8 

*/

#include <stdio.h>
#include <locale.h>

void Fibonacci(int n){
	
	int termo1, termo2, termon, i;

    termo1 = 0;
    termo2 = 1;
    
	printf("\nS�rie de Fibonacci:\n");
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
	
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    
    Fibonacci(n);
    
    return 0;
}
