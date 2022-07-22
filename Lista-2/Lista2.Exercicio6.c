/* 

6) Fazer um programa que sorteie um n�mero de 0 a 100 e que permita que o usu�rio
(sem conhecer o n�mero sorteado) tente acertar. Caso n�o acerte, o programa deve
imprimir uma mensagem informando se o n�mero sorteado � maior ou menor que a
tentativa feita. Ao acertar o n�mero, o programa deve imprimir a quantidade de tentativas
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

    printf("N�mero de 1 a 100 sorteado. Tente adivinhar.\n\n");
    resposta = aleatorio();

    do{
    	tentativas += 1;

        printf("Digite o n�mero: ");
        scanf("%d", &num);

        if(num > resposta)
            printf("O numero sorteado e menor que %d.\n\n", num);
    	else if (num < resposta)
        	printf("O numero sorteado e maior que %d.\n\n", num);
		else
			printf("Parab�ns, voce acertou o n�mero sorteado em %d tentativas! : )\n", tentativas);

	}while( num != resposta);

	return 0;
}
