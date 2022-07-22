/* 

8) #include <conio.h>
#include <stdio.h>
void main(){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
printf("\ni = %d",i);
printf(" vet[%d] = %.1f",i, vet[i]);
printf(" *(f + %d) = %.1f",i, *(f+i));
printf(" &vet[%d] = %X",i, &vet[i]);
printf(" (f + %d) = %X",i, f+i);
}
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
	float *f;
	int i;
	f = vet;

	printf("contador/valor/valor/endereco/endereco");

	for(i = 0 ; i <= 4 ; i++){
		printf("\ni = %d",i);
		printf(" vet[%d] = %.1f",i, vet[i]);
		printf(" *(f + %d) = %.1f |",i, *(f+i));
		printf(" &vet[%d] = %X",i, &vet[i]);
		printf(" (f + %d) = %X",i, f+i);
	}

	printf("\n\nO programa mostra de 2 maneiras diferentes o mesmo resultado.\nTanto o valor das variáves de cada casa do vetor, como seu endereço na memória.\n");
    return 0;
}
