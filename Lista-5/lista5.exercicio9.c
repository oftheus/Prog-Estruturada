/*

9) Fa�a um programa onde o usu�rio digita 3 informa��es a respeito de uma pessoa: Nome,
endere�o e telefone. Concatene essas tr�s informa��es em uma �nica string.

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

    printf("Endere�o:");
    gets(end);

    printf("Telefone:");
    gets(tel);

 	strcat(nome, end);
    strcat(nome, tel);

 	printf("\n%s", nome);

    return 0;
}

