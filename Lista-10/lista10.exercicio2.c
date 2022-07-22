#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float busca (char* arquivo, char* matricula);

int main(){
    char* matricula = "9020256-8";
    float nota = busca("./exercicio2data.txt", matricula);
    if(nota == -1) printf("A matrícula não foi encontrada\n");
    else printf("A nota do aluno de matricula %s é: %.1f", matricula, nota);
    return 0;
}

float busca (char* arquivo, char* matricula){
    FILE* data = fopen(arquivo, "r");
    if(data == NULL){
        printf("ERRO");
        exit(-2);
    }
    while (1){
        char mat[10];
        float nota;
        if(fscanf(data, "%10s %f", mat, &nota) == EOF){
            break;
        }
        else if(!strcmp(mat, matricula)){
            fclose(data);
            return nota;
        }
    }
    fclose(data);
    return -1;
}