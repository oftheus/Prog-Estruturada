/*

7) Fa�a um programa que dado um nome completo, retorne a abreviatura deste nome. N�o se devem
abreviar as preposi��es como: do, de, etc. A abreviatura deve vir separada por pontos. Ex: Paulo
Jose de Almeida Prado. Abreviatura: P.J.A.P.

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    char palavra[100];
    int i = 0, tam, count = 0;

    printf("Nome completo: ");
    gets(palavra);

    tam = strlen(palavra);

	printf("\nAbrevia��o: ");

    for(i = 0; i < (tam-1); i++){
        if(palavra[i] >= 65 && palavra[i] <= 90){
            printf("%c.",palavra[i]);
        }
    }

    printf("\n");

    return 0 ;
}
