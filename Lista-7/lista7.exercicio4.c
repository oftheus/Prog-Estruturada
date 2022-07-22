/*4. Escreva um programa para declarar um vetor de caracteres de tamanho 26 e imprimir o
seu conte�do. O vetor deve ser inicializado com as letras min�sculas do alfabeto. A
inicializa��o do vetor e a sua impress�o devem ser feitas por fun��es.*/

#include <stdio.h>
#include <stdlib.h>

char * declarar();
void imprimir();

int main()
{
    int i=0;
    char *vetor_resultado = declarar(26);
    imprimir(vetor_resultado);
    return 0;
}

char *declarar(){
    char *vetor = malloc(26 * sizeof(char));
    if (vetor == NULL){
        exit(1);
    }
    for (int i=0;i<26;i++){
        vetor[i] = 97 + i;
    }
    return vetor;
}

void imprimir(char *vetor_resultado){
    printf("vetor = [");
    for (int i=0;i<26;i++){
        if (i<25){
            printf("%c, ",vetor_resultado[i]);
        }
        else{
            printf("%c]\n",vetor_resultado[i]);
        }
    }
}
