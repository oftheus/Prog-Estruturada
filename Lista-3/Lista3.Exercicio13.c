/* 13) Fazer um programa para:
a. declarar variáveis a, b, c, d do tipo int.
b. declarar variáveis e, f, g, h do tipo float.
c. declarar vetor v de 10 elementos do tipo char.
d. declarar variável x do tipo int.
e. criar um ponteiro apontando para o endereço de a.
f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
Caso o endereço coincida com o endereço de alguma outra variável, informar o fato.*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, d, x, *pont;
    float e, f, g, h;
    char vet[10];
    
    pont = &a;
    
    printf("Endereço de a = %d\nEndereço de b = %d\nEndereço de c = %d\nEndereço de d = %d\nEndereço de x = %d\nEndereço de e = %d\nEndereço de f = %d\nEndereço de g = %d\nEndereço de h = %d\nEndereço de vet = %d\n",&a,&b,&c,&d,&x,&e,&f,&g,&h,&vet);
    
    if(pont == &b || pont == &c || pont == &d || pont == &x || pont == &e || pont == &f || pont == &g || pont == &h || pont == &vet){
    	printf("O endereço de A coincide com o endereço de alguma outra variável");
	}
	else{
		printf("\nTudo OK!\nNenhum endereço coincide!\n");
	}
    
    return 0;
}
