/*

4) Escreva um programa em C para ler uma palavra e escrever:
-A primeira letra da palavra.
-A �ltima letra da palavra.
-O n�mero de letras existente na palavra (n�o usar a fun��o strlen())

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    char palavra[101];

    int i = 0, num;

    printf("Digite uma palavra: ");
    gets(palavra);

    while(palavra[i] != '\0'){
        i++;
    }

    printf("\nPrimeira letra: %c.\n",palavra[0]);
    printf("�ltima letra: %c.\n",palavra[i-1]);
    printf("N�mero de letras: %d.\n", i);

    return 0;
}
