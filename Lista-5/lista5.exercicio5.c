/*

5) O que será impresso na tela pelo seguinte programa:

main(void)
{
	char frase[80]="o rato roeu a roupa do rei de roma";
	char *p;
	p = frase;
	p[2]='m';
	p[6]='\0';
	printf("%s\n", frase);
	p = p + 3;
	printf("%s\n",p);
	printf("%d\n",strlen(frase));
}

*/

#include <stdio.h>
#include <string.h>

main(void)
{
	char frase[80]="o rato roeu a roupa do rei de roma";
	char *p;
	p = frase;
	p[2]='m';                       // mudou o valor de p[2], ou seja, "o mato roeu a roupa do rei de roma"
	p[6]='\0';                      // finalizou a string em p[6], ou seja, o mato roeu 
	printf("%s\n", frase);          // imprime "o mato roeu"
	p = p + 3;                      // incrementou 3 em p, ou seja, o valor inicial de p na string é 'a'
	printf("%s\n",p);               // imprime a string a partir de p até o ' ', ou seja "ato"
	printf("%d\n",strlen(frase));   // imprime o número de algarismos até p[6]
}
