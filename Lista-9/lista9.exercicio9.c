#include <stdio.h>
typedef struct aluno{
    float media;
    char nome[51];
}ALUNO;


void ordena (ALUNO turma[], int tam) {//Essa função só funciona para turmas de 4
    int i, foraOrdem , jaOrdenados = 0;
    ALUNO temp;
    do {
        foraOrdem = 0;
        for (i = 0; i < 4 - 1 - jaOrdenados ; i++) {
            if (turma[i].media > turma[i+1].media) {
                temp = turma[i];
                turma[i] = turma[i+1];
                turma[i+1] = temp ;
                foraOrdem = 1;
            }
        }
        jaOrdenados ++;
    } while ( foraOrdem );
}

int main(){
    ALUNO turma[] = {{10.0, "José"}, {7.8, "João"}, {2.6, "Jacó"}, {8.3, "Júlia"}};

    ordena(turma, 4);
    for(int i = 0; i < 4; i++){
        printf("%.1f: %s\n", turma[i].media, turma[i].nome);
    }
    return 0;
}