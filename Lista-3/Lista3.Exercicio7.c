/* 

7) Seja a seguinte sequ�ncia de instru��es em um programa C:
int *pti;
int veti[]={10,7,2,6,3};
pti = veti;
Qual afirmativa � falsa?
a. *pti � igual a 10
b. *(pti+2) � igual a 2
c. pti[4] � igual a 3
d. pti[1] � igual a 10
e. *(veti+3) � igual a 6

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int *pti;
	int veti[]={10,7,2,6,3};
	pti = veti;

    printf("letra a = %d - VERDADEIRO\n",*pti);

	printf("letra b = %d - VERDADEIRO\n",*(pti+2));

	printf("letra c = %d - VERDADEIRO\n",pti[4]);

	printf("letra d = %d - FALSO\n",pti[1]);

	printf("letra e = %d - VERDADEIRO\n",*(veti+3));

    return 0;
}
