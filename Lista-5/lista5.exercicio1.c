/*

1) Faça um programa com uma função que calcule o número de vogais existentes em uma string. A
função recebe a string e atualiza a resposta (número de vogais) em uma variável que foi passada por
referência.

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int cal_vogal(int num, char *str);

int main(){
	setlocale(LC_ALL, "Portuguese");

    char str[100];
    int x, num = 0;

    printf("Digite uma String: ");
    gets(str);

    x = cal_vogal(num, str);
    printf("\nA string tem %d vogais.\n", x);

    return 0;
}

int cal_vogal(int num ,char *str){
	int i;
	char vogais[10] = "aeiouAEIOU";

	while (*str){
		for (i = 0; i < 10; i++){
			if (*str == vogais[i]){
				num++;
			}
		}
		str++;
	}
	return num;
}
