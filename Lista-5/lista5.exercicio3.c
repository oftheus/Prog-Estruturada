/*

3) Construa uma função que receba como argumento de entrada uma cadeia de 20 caracteres e um
caractere e retorne o número de vezes que este caractere aparece na cadeia.

*/

#include <stdio.h>
#include <locale.h>


int contador(char *str, char c){

    int count = 0;
    int i;

    for(i = 0; i < 20; i++){

		if (str[i] == c){
			count++;
        }
    }
	return count;
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	char str[20], c;
	int i, resp, len;

    do{
        printf("Digite uma string: ");
        gets(str);

        len = strlen(str);

    }while(len > 20);

    printf("\nDigite um caractere: ");
    scanf("%c",&c);

    resp = contador(str,c);

    printf("\nA string tem %d caracteres %c.\n",resp,c);
	return 0;
}


