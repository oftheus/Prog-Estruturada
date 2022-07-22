/*

13) Faça um programa que demonstre o uso de 3 funções da biblioteca string.h que ainda não
tenham sido usadas em listas de exercícios da disciplina.

*/


#include <string.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

    //strok():
    char str1[] = "ExemploDaString.h";
    const char s[] = "S";
   
    printf("String completa: %s\n", str1);
    printf("\nString com strtok(): %s\n", strtok(str1, s));

    //strchr():
    char str2[] = "ExemploDaString.h";
    int caractere = 'a';
    printf("\nString com strchr(): %s\n", strchr(str2, caractere));

    //strstr():
    const char str3[] = "ExemploDaString.h";
    const char parte[] = "String";

    printf("\nString com strchr(): %s\n\n", strstr(str3, parte));


    return 0 ;
}
