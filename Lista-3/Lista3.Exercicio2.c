/* 

2) Seja o seguinte trecho de programa:
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
Qual é o valor das seguintes expressões ?
a) p == &i; b) *p - *q c) **&p d) 3* - *p/(*q)+7

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i = 3, j = 5;
	int *p, *q;
	
	p = &i;
	q = &j;
	
	printf("Letra a = ");
	printf("%d\n\n", p == &i);
	
	printf("Letra b = ");
	printf("%d\n\n", *p - *q);
	
	printf("Letra c = ");
	printf("%d\n\n", **&p);
	
	printf("Letra d = ");
	printf("%d\n\n", 3* - *p/(*q)+7);
	
	return 0;
}

