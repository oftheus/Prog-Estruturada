/*

1) Fa�a um programa com uma fun��o que calcule o n�mero de vogais existentes em uma string. A
fun��o recebe a string e atualiza a resposta (n�mero de vogais) em uma vari�vel que foi passada por
refer�ncia.

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
