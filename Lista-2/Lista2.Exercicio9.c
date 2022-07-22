/* 

9) Implementar a função INVERTE que recebe um número unsigned int como parâmetro e retorna este número escrito ao contrário. Ex: 431 <-> 134.

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

	printf("Digite um número: ");
	scanf("%d",&num);
	
	printf("Número invertido: \n");
	Inverte(num);
	
	return 0;
}
