/*

8) Faça um programa que dado 2 palavras, determine:
a. Se as palavras são iguais;
b. Verifique se a segunda palavra é uma sub string da primeira. Ex: casa e casamento.

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
        printf("\nAs duas palavras são iguais");
    }
	else{
        printf("\nAs duas palavras são diferentes");
    }

    if(strstr(p1, p2) == NULL){
        printf("\n\nA segunda palavra não é substring da primeira.\n");
    }
	else{
    printf("\n\nA segunda palavra é substring da primeira.\n");
    }

    return 0;
}

