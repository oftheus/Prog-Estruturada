/*

12) Fazer um programa para receber uma string do usuário (máx. 50 caracteres) e fazer uma
estatística dos caracteres digitados. Por exemplo, para a string "O EXERCICIO E FACIL"”, a
estatística mostrada será 'O' = 2, ' '=3, 'E' = 3, 'X' = 1, 'R' = 1, 'C' = 3, 'I' = 3, 'F' = 1, 'A' = 1, 'L' = 1

*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");

	int posicao, k = 0, e = 0, i = 0, l = 0, deb = 0, m = 0, arv = 0;
	char str1[50], arm[1000] = " ";

	printf("Digite uma string: ");
	gets(str1);

	printf("\n");

	while(str1[l] != '\0'){
		e = 0;

		for(k = 0; k <= strlen(str1); k++){
			if(str1[l] == str1[k]){
				e++;
			}
			if(k == strlen(str1)){
				for(deb = 0; deb <= strlen(str1); deb++){
					if(str1[l] == arm[deb]){
						m=0; break;
					}
					else{
						m++;
					}
				}

				if(m!= 0){
					printf(" %c = %d \n", str1[l], e);
					arm[arv++] = str1[l];
					}
			}
		}

		l++;
		i++;
	}

	return 0;
}
