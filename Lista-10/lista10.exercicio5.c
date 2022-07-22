#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE 10

int main(){
    int tam = INITIAL_SIZE;
    float* vetor = (float*) malloc(sizeof(float) * INITIAL_SIZE);
    if(vetor == NULL) exit(-2);

    printf("Insira o nome do arquivo contendo os valores:\n");
    char arquivo[81];
    scanf("%80s", arquivo);

    FILE* data = fopen(arquivo, "r");
    if(data == NULL){
        printf("ERRO: não foi possível abrir o arquivo");
        return(1);
    }
    float valor;
    int cont = 0;
    while (fscanf(data, "%f", &valor) != EOF){
        vetor[cont] = valor;
        cont++;
        if(cont == tam){
            //caso o número de elementos de elementos seja maior que o vetor, +10 ao seu tamnho
            tam += 10;
            vetor = (float*) realloc(vetor, tam);
            if(vetor == NULL){
                printf("Não foi possivel realocar o vetor de valores");
                return(2);
            }
        }
    }
    fclose(data);

    vetor = (float*) realloc(vetor, cont);//mantem o vetor com o tamanho exato de elementos

    float media = 0;
    for(int i = 0; i < cont; i++) media += vetor[i];
    media = media / cont;

    printf("A média é: %.2f", media);

    free(vetor);
    return 0;
    
}