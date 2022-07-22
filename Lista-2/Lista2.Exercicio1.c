/* 

1) Fa�a um programa que verifique se um determinado n�mero � primo. 
O n�mero a ser testado deve ser fornecido pelo usu�rio do programa. 
O programa deve imprimir a mensagem �NUMERO PRIMO� caso o n�mero seja primo, e �NUMERO NAO PRIMO� caso contr�rio.

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
	    printf("N�MERO PRIMO\n");
	else
		printf("N�MERO N�O PRIMO\n");	 
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	Verificar(num);
	
	return 0;
}
