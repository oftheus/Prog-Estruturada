#include <stdio.h>
#include <string.h>
#define MAX 50
int main (void) {
    char texto[MAX +2], temp ;
    int tam , i;
    gets( texto ); //ler entrada de caracteres, exemplo: matheus
    tam = strlen ( texto ); //tamanho do vetor, 7
    for (i = 0; i < tam ; i ++) { //loop enquanto i for menor que o tamanho do vetor texto
        temp = texto[i]; //variavel temp recebe o caracter do vetor texto na posição i
        /* no caso,ao decorrer do loop, a variável temp recebe os seguintes caracteres:
        temp = texto[0] = m;
        temp = texto[1] = a;
        temp = texto[2] = t,
        temp = texto[3] = h,
        temp = texto[4] = e,
        temp = texto[5] = u,
        temp = texto[6] = s*/

        texto[i] = texto[ tam -1 - i ];
        /*texto[0]=s;
        texto[1]=u;
        texto[2]=e;
        texto[3]=h
        texto[4]=t
        texto[5]=a
        texto[6]=m*/

        texto[strlen(texto) -1 - i] = temp ;
        /* texto[6]=m
        texto[5]=a
        texto[4]=t
        texto[3]=h
        texto[2]=e
        texto[1]=u
        texto[0]=s*/
    }
    puts ( texto ); //irá printar matheus, ou seja, a mesma entrada do começo
    return 0;
}
