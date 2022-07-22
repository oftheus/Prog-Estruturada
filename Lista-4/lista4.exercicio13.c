#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#define MAX 50

void repeticoes (char *vetor)
{
    int comprimento = strlen(vetor);
    char unico[comprimento];
    int contados = 0;

    for (int i=0; i < comprimento; i++){
        bool ja_contados = false;
        for (int j = 0; j < contados; j++)
        {
            if (vetor[i] == unico[j]){
            ja_contados = true;
            }
        }

        if (ja_contados) continue;
        int cont=0;
        for (int j=0; j<comprimento;j++){
            if (vetor[i] == vetor[j]){
                cont++;
            }
        }
        printf("'%c'=%d", vetor[i], cont);
        if (i<(comprimento-2)){
            printf(",");
        }
        unico[contados] = vetor[i];
        contados++;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite uma sting de no máximo 50 caracteres\n");
    char vetor[MAX + 1];
    int i;
    char c;
    for (i=0;i<=MAX;i++){
        c = getchar();
        if (i==MAX){
            break;
        }
        if (c =='\n'){
            break;
        }
        else{
            vetor[i]=c;
        }
    }
    vetor[MAX]='\0';
    printf("%s\n",vetor);
    repeticoes(vetor);
    return 0;
}
