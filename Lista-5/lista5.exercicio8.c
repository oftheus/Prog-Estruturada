/*

8) Fa�a um programa que dado 2 palavras, determine:
a. Se as palavras s�o iguais;
b. Verifique se a segunda palavra � uma sub string da primeira. Ex: casa e casamento.

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    const char p1[50], p2[50];

    printf("Digite a primeira palavra: ");
    gets(p1);

    printf("Digite a segunda palavra: ");
    gets(p2);;

    if(strcmp(p1, p2) == 0){
        printf("\nAs duas palavras s�o iguais");
    }
	else{
        printf("\nAs duas palavras s�o diferentes");
    }

    if(strstr(p1, p2) == NULL){
        printf("\n\nA segunda palavra n�o � substring da primeira.\n");
    }
	else{
    printf("\n\nA segunda palavra � substring da primeira.\n");
    }

    return 0;
}

