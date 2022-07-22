/* 

9)Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor
do terceiro elemento da matriz?
a) *(pulo + 2) b) *(pulo + 4) c) pulo + 4 d) pulo + 2 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
	int pulo[10];
	
	pulo[0] = 1;
	pulo[1] = 2;
	pulo[2] = 3;
	pulo[3] = 4;
	pulo[4] = 5;
	pulo[5] = 6;
	pulo[6] = 7;
	pulo[7] = 8;
	pulo[8] = 9;
	pulo[9] = 10;
	
	printf("letra a = %d\n",*(pulo + 2));
	printf("letra b = %d\n",*(pulo + 4));
	printf("letra c = %d\n", pulo + 4);
	printf("letra d = %d\n\n", pulo + 2);
	printf("Resposta correta: letra a = %d\n",*(pulo + 2));

	
	return 0;
}
