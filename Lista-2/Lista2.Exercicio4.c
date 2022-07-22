/* 

4) Escreva um programa que sorteie uma letra do alfabeto de ‘a’ a ‘z’ e o usuário é
perguntado qual é essa letra. O programa deve informar se a letra é maior ou menor e
quando o usuário a acertou.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int charint(char chute){
	int letra = 0;
	letra = (int)chute;
	return letra;
}

int aleatorio(){
    srand( (unsigned)time(NULL) );
    return (97 + rand()%25);
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	int resposta, tentativas = 0, letra;
	char chute;

	printf("Uma letra do alfabeto foi sorteada. Tente adivinhar.\n\n");
	resposta = charint(aleatorio());

	do{
		tentativas += 1;

		printf("Digite a letra: ");
		scanf("%s",&chute);

		letra = charint(chute);

		if(letra >= 97 && letra <= 122){

			if(letra > resposta)
	            printf("A letra sorteada vem antes.\n\n");
	    	else if (letra < resposta)
	        	printf("A letra sorteada vem depois.\n\n");
			else
				printf("Parabéns, voce acertou a letra sorteada em %d tentativas! : )\n", tentativas);
		}
	}while( letra != resposta);

	return 0;
}
