/*

9) Faça um programa onde o usuário digita 3 informações a respeito de uma pessoa: Nome,
endereço e telefone. Concatene essas três informações em uma única string.

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    char x, nome[50], end[50], tel[20];
	int i;

	printf("Nome:");
    gets(nome);

    printf("Endereço:");
    gets(end);

    printf("Telefone:");
    gets(tel);

 	strcat(nome, end);
    strcat(nome, tel);

 	printf("\n%s", nome);

    return 0;
}

