/* 13) Fazer um programa para:
a. declarar vari�veis a, b, c, d do tipo int.
b. declarar vari�veis e, f, g, h do tipo float.
c. declarar vetor v de 10 elementos do tipo char.
d. declarar vari�vel x do tipo int.
e. criar um ponteiro apontando para o endere�o de a.
f. incrementar o ponteiro, mostrando o conte�do do endere�o apontado (em forma de n�mero).
Caso o endere�o coincida com o endere�o de alguma outra vari�vel, informar o fato.*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, d, x, *pont;
    float e, f, g, h;
    char vet[10];
    
    pont = &a;
    
    printf("Endere�o de a = %d\nEndere�o de b = %d\nEndere�o de c = %d\nEndere�o de d = %d\nEndere�o de x = %d\nEndere�o de e = %d\nEndere�o de f = %d\nEndere�o de g = %d\nEndere�o de h = %d\nEndere�o de vet = %d\n",&a,&b,&c,&d,&x,&e,&f,&g,&h,&vet);
    
    if(pont == &b || pont == &c || pont == &d || pont == &x || pont == &e || pont == &f || pont == &g || pont == &h || pont == &vet){
    	printf("O endere�o de A coincide com o endere�o de alguma outra vari�vel");
	}
	else{
		printf("\nTudo OK!\nNenhum endere�o coincide!\n");
	}
    
    return 0;
}
