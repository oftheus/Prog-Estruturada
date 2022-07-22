/* 

4) Fazer uma fun��o denominada divs() que:
a. recebe como par�metro um n�mero inteiro n por valor e dois n�meros inteiros max e min por
refer�ncia;
b. retorna 0 se o n�mero num � primo e 1 caso contr�rio. Se o n�mero n�o for primo, as vari�veis
max e min devem assumir os valores do menor e do maior divisores inteiros do n�mero,
respectivamente, desconsiderando o n�mero 1 e o pr�prio n�mero num.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXI 10

void divs(int n, int *max, int *min){

    int divisores[MAXI];

    int resp = 0, i, j = 0;
    for (i = 2; i <= n / 2; i++){

        if (n % i == 0) {
            divisores[j] = i;
            j += 1;
            resp++;
        }
    }

    if (resp == 0){
    	printf("Retorno: 0\n");
    }
    else{
        *max = divisores[j-1];
        *min = divisores[0];
        printf("Retorno: 1\n");
        printf("Maior divisor inteiro de %d = %d\nMenor divisor inteiro de %d = %d\n", n, *max, n ,*min);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, max = 0, min = 0;
    int resp;

    printf("Digite um n�mero: ");
    scanf("%d",&n);

    divs(n,&max,&min);

    return 0;
}
