/* 

1) Faça um programa que verifique se um determinado número é primo. 
O número a ser testado deve ser fornecido pelo usuário do programa. 
O programa deve imprimir a mensagem “NUMERO PRIMO” caso o número seja primo, e “NUMERO NAO PRIMO” caso contrário.

*/

#include <stdio.h>
#include <locale.h>

void Verificar(int num){
	
	int resp = 0, i;
	for (i = 2; i <= num / 2; i++){
    	if (num % i == 0) {
       		resp++;
       		break;
    	}
 }
 
	if (resp == 0)
	    printf("NÚMERO PRIMO\n");
	else
		printf("NÚMERO NÃO PRIMO\n");	 
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	Verificar(num);
	
	return 0;
}
