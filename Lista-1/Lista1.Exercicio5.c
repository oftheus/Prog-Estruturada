/* 

5) 
Defina as variáveis a, b e c (tipo de dado) para obter todas as possíveis respostas para
os valores de ‘c’:
Suponha que:
a = 3
b = a / 2
c = b + 3.1
Valores possíveis para ‘c’?
1. c = 4.6
2. c = 4.1
3. c = 4 

*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char resp;
	printf("Qual resultado obter? (1, 2 ou 3): ");
	scanf("%c",&resp);
	
	switch(resp){
		
		case '1':{
			float a,b,c;
			a = 3;
			b = a / 2;
			c = b + 3.1;
			
			printf("Resposta: %.1f",c);
			break;
		}
		
		case '2':{
			int a;
			float b,c;
			a = 3;
			b = a / 2;
			c = b + 3.1;
	
			printf("Resposta: %.1f",c);
			break;
		}
		
		case '3':{
			int a,b,c;
	
			a = 3;
			b = a / 2;
			c = b + 3.1;
	
			printf("Resposta: %d",c);
			break;
		}
		
		default: printf("Operação inválida!\n"); break;	
	}

	return 0;
}

