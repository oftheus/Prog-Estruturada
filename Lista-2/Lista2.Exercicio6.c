/* 

6) Fazer um programa que sorteie um número de 0 a 100 e que permita que o usuário
(sem conhecer o número sorteado) tente acertar. Caso não acerte, o programa deve
imprimir uma mensagem informando se o número sorteado é maior ou menor que a
tentativa feita. Ao acertar o número, o programa deve imprimir a quantidade de tentativas
feitas.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int aleatorio(){

    srand( (unsigned)time(NULL) );
    return (1 + rand()%10);
}

int main(){
	setlocale(LC_ALL, "Portuguese");

    int resposta, tentativas = 0, num;

    printf("Número de 1 a 100 sorteado. Tente adivinhar.\n\n");
    resposta = aleatorio();

    do{
    	tentativas += 1;

        printf("Digite o número: ");
        scanf("%d", &num);

        if(num > resposta)
            printf("O numero sorteado e menor que %d.\n\n", num);
    	else if (num < resposta)
        	printf("O numero sorteado e maior que %d.\n\n", num);
		else
			printf("Parabéns, voce acertou o número sorteado em %d tentativas! : )\n", tentativas);

	}while( num != resposta);

	return 0;
}
