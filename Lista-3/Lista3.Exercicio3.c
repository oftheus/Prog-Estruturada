/* 

3) Qual é a saída deste programa supondo que i ocupa o endereço 4094 na memória?
main() {
int i=5, *p;
p = &i;
printf("%x %d %d \n", p, *p+2, 3**p);
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i=5, *p;
	
	p = &i;
	
	printf("4094 %d %d \n", *p+2, 3**p);
	
	return 0;
}

