#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE 10

void bubblesort(float* vetor, int tam);

int main(){
    FILE* data = fopen("numeros.txt", "r");
    if(data == NULL) exit(-1);
    
    int tam = INITIAL_SIZE;
    float* vetor = (float*) malloc(sizeof(float) * INITIAL_SIZE);
    if(vetor == NULL) exit(-2);

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
    bubblesort(vetor, cont);

    FILE* binario = fopen("numeros.bin", "wb");
    if(binario == NULL) return -3;
    for(int i = 0; i < cont; i++){
        fprintf(binario, "%f\n", vetor[i]);
    }
    fclose(binario);
    free(vetor);
    return 0;
}

void bubblesort(float* vetor, int tam){
    for(int i = 0; i < tam; i++){
        int troca = 0;
        for(int j = 0; j < tam - 1 - i ; j++){
            if(vetor[j] > vetor[j+1]){
                float temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
                troca = 1;
            }
        }
        if(troca == 0) break;
    }
}