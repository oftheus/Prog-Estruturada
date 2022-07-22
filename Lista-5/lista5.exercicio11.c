/*

11) Fazer um programa que receba uma string de no máximo 20 caracteres do usuário e mostre o
conteúdo desta string de forma invertida.

*/


#include<stdio.h>

#include<conio.h>

#include<string.h>

int main(){

    char str1[20],str2[20];

    int cont1,cont2,len;

    do{
        printf("Digite uma string: ");
        gets(str1);

        len = strlen(str1);

    }while(len > 20);

    cont2 = strlen(str1) - 1 ;

    for(cont1 = 0; cont1 < strlen(str1);cont1++){

        str2[cont2] = str1[cont1];
        cont2--;
    }

    str2[cont1] = '\0';

    printf("Invertido: %s\n",str2);

    return 0;
}
