/*

2)Mostre e explique (comentando as linhas de c�digo) o que ser� impresso na tela:

#include<stdio.h>
#include<string.h>
main(void)
{
	char texto[]= "foi muito facil";
	int i;
	for (i = 0; texto[i]!='\0'; i++)
	{
		if (texto[i] == ' ') break;
	}
	i++;
	for ( ; texto[i]!='\0'; i++)
	{
		printf("%c", texto[i]);
	}
}

*/

#include<stdio.h>
#include<string.h>
main(void)
{
	char texto[]= "foi muito facil";
	int i;
	for (i = 0; texto[i]!='\0'; i++){
		if (texto[i] == ' ') break;
	}

	i++;

	for ( ; texto[i]!='\0'; i++){
		printf("%c", texto[i]);
	}
}
