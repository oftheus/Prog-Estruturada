#include <stdio.h>
#include <string.h>
int main (void) {
    char *frase = "Otimo teste"; //inicializou um vetor contendo a string Otimo teste
    char *p , misterio[80]; //inicializou o vetor p e o vetor misterio com tamanho 80
    int i = 0; //inicializou o inteiro i = 0
    int j = 0; //inicializou o inteiro j = 0
    p = frase + strlen (frase) - 1; //p = 12 + 11 = 23
    while (*p !=' ') { //enquanto o conteudo de p for diferente de 'espaço'
        misterio[i] = *p; //vetor misterio = conteudo de p, em relação à posição i
        i ++; p --; //incrementando i, decrementando p, inverte ordem da string
        // p = teste ; misterio = etset
    }
    misterio[i] = ' '; i ++; //i=5, misterio[5]=' ',i=5+1=6, misterio = etset
    while (frase[j] != ' ') { //enquanto o conteudo de frase for diferente de 'espaço'
        misterio [i] = frase[j]; //vetor misterio[6] = frase[0]
        j ++; i ++; //incrementa j e i
        //misterio  = etset Otimo
    }
    misterio[i] = '\0'; //misterio[11] = '\0'
    puts (misterio); //misterio = etset Otimo
    return 0;
}
