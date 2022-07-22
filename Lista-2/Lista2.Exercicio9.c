/* 

9) Implementar a fun��o INVERTE que recebe um n�mero unsigned int como par�metro e retorna este n�mero escrito ao contr�rio. Ex: 431 <-> 134.

*/

#include <stdio.h>
#include <locale.h>

int Inverte(unsigned int num){
	
    if(num == 0 ){
    	return num;	
	}

    else{
        printf("%d", num % 10);
        num = num / 10;
        return Inverte(num);
    }
} 

int main(){
	setlocale(LC_ALL, "Portuguese");

	unsigned int num;
	int invertido;

	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	printf("N�mero invertido: \n");
	Inverte(num);
	
	return 0;
}
