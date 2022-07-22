#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    int matricula;
    float *vNotas; // Armazena as 5 notas de um aluno ao longo de um ano.
    char nome[100];
}Aluno;

typedef struct Matéria {
    Aluno *V; // Armazena a informação de n alunos !!
    float media[5]; // Armazena as 5 médias do ano.
    int nAlunos; // Número de alunos matriculados no curso.
}Materia;

Aluno* fillAluno(){
    Aluno* retorno = (Aluno*) malloc(sizeof(Aluno));
    if(retorno == NULL) exit(1);
    printf("Insira a mátricula do aluno:\n");
    scanf("%d", &retorno->matricula);
    printf("Insira o nome do aluno:\n");
    scanf("%s", retorno->nome);
    retorno->vNotas = (float*) malloc(5*sizeof(float));
    if(retorno->vNotas == NULL) exit(2);
    for(int i = 0; i < 5; i++){
        printf("Insira o resultado da %d prova:\n", i+1);
        scanf("%f", &retorno->vNotas[i]);
    }
    return retorno;
}

void mediaMateria(Materia *m1){
    //somamos os resultados de cada prova de cada aluno
    for(int i = 0; i < m1->nAlunos; i++){
        for(int j = 0; j < 5; j++){
            m1->media[j] += m1->V[i].vNotas[j];
        }
    }
    for(int i = 0; i < 5; i++){
        m1->media[i] /= m1->nAlunos;
    }
}

Materia* fillMateria(int numAlunos){
    Materia* retorno = (Materia*) malloc(sizeof(Materia));
    if(retorno == NULL) exit(3);
    retorno->nAlunos = numAlunos;
    retorno->V = (Aluno*) malloc(retorno->nAlunos * sizeof(Aluno));
    if(retorno->V == NULL) exit(4);
    for(int i = 0; i < retorno->nAlunos; i++){
        printf("------Aluno %d------\n", i+1);
        Aluno* temp = fillAluno();
        retorno->V[i] = *temp; //fillAluno retorna um ponteiro, o * pega o valor q ele aponta
        free(temp);
    } 
    return retorno;
}

void mostraMateria(Materia *m1){
    for(int i = 0; i < m1->nAlunos; i++){
        printf("Aluno %d:\n", i+1);
        printf(" Nome: %s\n", m1->V[i].nome);
        printf(" Matricula: %d\n", m1->V[i].matricula);
        for(int j = 0; j < 5; j++) printf(" Nota p%d: %.1f\n", j+1, m1->V[i].vNotas[j]);
        printf("\n");
    }
    printf("Média total matéria: \n");
    for(int i = 0; i < 5; i++){
        printf(" p%d: %.1f\n", i+1, m1->media[i]);
    }
}

int main(){
    Materia* mat = fillMateria(5);
    mediaMateria(mat);
    mostraMateria(mat);
    free(mat);
    return 0;
}