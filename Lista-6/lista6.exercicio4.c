#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam);


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int inscr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int p1 = 2;
    int p2 = 3;
    float t1[10] = {
        6.5,
        2.5,
        5.7,
        8.9,
        6.7,
        6.0,
        7.5,
        8.4,
        1.0,
        5.8
    };
    float t2[10] = {
        8.5,
        7.5,
        4.7,
        6.9,
        8.7,
        2.0,
        6.5,
        6.4,
        5.0,
        10.0
    };
    int tam = 10;

    int * prem = premiados(tam, inscr, t1, p1, t2, p2, &tam);
    printf("Alunos premiados: ");
    for(int i = 0; i < tam; i++){
        printf("%d ", prem[i]);
    }
    free(prem);
    return 0;
}

int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam){
    //vetor contendo a média de todos os participantes
    float * media_vet = (float *) malloc(n * sizeof(float));
    if(media_vet == NULL){
        printf("Não foi possivel alocar o espaço do vetor auxiliar");
        exit(-2);
    }
    float media_geral = 0;
    for(int i = 0; i < n; i++){
        //Calcula a media de um estudante e adiciona ela a media geral
        media_vet[i] = (t1[i]*p1 + t2[i]*p2)/(p1+p2);
        media_geral+= media_vet[i];
    }    
    media_geral = media_geral / n;

    int n_acima_da_media = 0;
    int * estudantes_acima_da_media = (int*) malloc(n * sizeof(int));
    if(estudantes_acima_da_media == NULL){
        printf("Não foi possivel alocar o espaço do vetor de estudantes");
        exit(-1);
    }
    //Checar quantos estudantes estão acima da média
    for(int i = 0; i < n; i++){
        if(media_vet[i] >= media_geral){
            estudantes_acima_da_media[n_acima_da_media] = inscr[i];
            n_acima_da_media++;
        }
    }

    estudantes_acima_da_media = realloc(estudantes_acima_da_media, n_acima_da_media);
    if(estudantes_acima_da_media == NULL){
        printf("Não foi possivel realocar o vetor dos estudantes acima da media");
        exit(-2);
    }
    *tam = n_acima_da_media;
    free(media_vet);
    return estudantes_acima_da_media;
}