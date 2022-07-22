#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int *aprovados(int n, int *mat, float *notas, int *tam);

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int alunos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float notas[10] = {4.5f, 6.7f, 5.4f, 7.9f, 2.3f, 0.0f, 5.0f, 7.6f, 5.9f, 10.0f};
    int tam = 0;
    int* alunos_aprov = NULL;
    alunos_aprov = aprovados(10, alunos, notas, &tam);
    printf("Alunos aprovados: ");
    for(int i = 0; i < tam; i++){
        printf("%d ", alunos_aprov[i]);
    }
    free(alunos_aprov);
    return 0;
}
int *aprovados(int n, int *mat, float *notas, int* tam){
    int n_aprov = 0;//conta quantos alunos foram aprovados
    for(int i = 0; i < n; i++){
        if(notas[i] >= 5.0){
            n_aprov++;
        }
    }
    int * vet_aprov = (int *) malloc(n_aprov * sizeof(int));
    if(vet_aprov == NULL){
        printf("Não foi possivel alocar o vetor dos aprovados!");
        exit(-1);
    }
    int pos_aprov = 0;
    for(int j = 0; j < n; j++){
        if(notas[j] >= 5.0){
            vet_aprov[pos_aprov] = mat[j];
            pos_aprov++;
        }
    }
    *tam = n_aprov;
    return vet_aprov;
}