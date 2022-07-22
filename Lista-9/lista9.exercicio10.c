#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct aluno{
    char nome[51];
    float media;
};

void le(struct aluno turma[]){
    for(int i = 0; i < MAX; i++){
        printf("Insira o primeiro nome do aluno numero %d\n", i+1);
        scanf("%s", turma[i].nome);
        printf("Insira a média do aluno numero %d\n", i+1);
        scanf("%f", &turma[i].media);
    }
}

void imprime(struct aluno turma[]){
    for(int i = 0; i < MAX; i++){
        printf("%s: %.1f\n", turma[i].nome, turma[i].media);
    }
}

void ordena_medias(struct aluno turma[]){
    for(int i = 0; i < MAX; i++){
        int troca = 0;
        for(int j = 0; j+1<MAX; j++){
            if(turma[j].media > turma[j+1].media){
                struct aluno temp = turma[j];
                turma[j] = turma[j+1];
                turma[j+1] = temp;
                troca = 1;
            }
        }
        if(troca == 0) break;
    }
}


int main (void) {
    struct aluno turma[MAX];
    le( turma );

    puts (" Imprimindo dados lidos da turma.");
    puts (" Digite qualquer coisa para continuar .");
    getchar ();
    imprime ( turma );
    ordena_medias ( turma );
    puts (" Imprimindo dados ordenados da turma.");
    puts (" Digite qualquer coisa para continuar .");
    getchar ();
    imprime ( turma );
    getchar ();
}