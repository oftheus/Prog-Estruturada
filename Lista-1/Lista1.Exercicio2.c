/* 

2) Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
menor deles, os valores pares e a média.

*/

#include <stdio.h>
#include <locale.h>

void par(int num){
	
	if(num % 2 == 0) printf("O número %d é par.\n", num);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,n3,maior,menor;
	float media;
	
	printf("Digite 3 valores: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3.0;
	
	maior = n1;
	menor = n1;
	
	if(menor > n2) menor = n2;
	if(menor > n3) menor = n3;
	
	if(maior < n2) maior = n2;
	if(maior < n3) maior = n3;
	
	par(n1);
	par(n2);
	par(n3);
	
	printf("O menor número é o %d.\nO maior número é o %d.\nA média é %.2f.", menor, maior, media);
	
	return 0;
}

