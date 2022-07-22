#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float *acima_da_media(int n, float *vet, int *tam);
float media(int n, float *vet);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vet[9] = {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0, 6.9};
    int n = 9;
    int *tam = &n;

    float *novo_vet = acima_da_media(n, vet, tam);

    printf("Vet: ");
    for(int i = 0; i < *tam; i++){
        printf("%g, ", novo_vet[i]);
    }
    printf("\nTam: %d", *tam);
    free(novo_vet);
    return 0;
}


float *acima_da_media(int n, float *vet, int *tam){
    float v_media = media(n, vet);
    
    //vetor temporário para armazenar os valores acima da média
    float * vetorTemp = (float *) malloc(n*sizeof(float));
    if(vetorTemp == NULL){
        printf("ERRO: Não foi possível alocar o vetor temporário");
        exit(1);
    }
    int tamanho_novo_vetor = 0;//Esse valor será usado tanto para inserir novos items quanto para determinar tamanho
    for(int i = 0; i < n; i++){
        if(vet[i] > v_media){
            vetorTemp[tamanho_novo_vetor] = vet[i];
            tamanho_novo_vetor++;
        }
    }
    float * resultado = (float *) malloc(tamanho_novo_vetor*sizeof(float));
    if(resultado == NULL){
        printf("ERRO: Não foi possível alocar o novo vetor");
        exit(1);
    }
    for(int j = 0; j < tamanho_novo_vetor; j++){
        resultado[j] = vetorTemp[j];
    }
    free(vetorTemp);
    *tam = tamanho_novo_vetor;
    return resultado;
}

float media(int n, float *vet){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += vet[i];
    }

    return soma/n;
}