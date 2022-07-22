#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media (char* mat, char* nome_arquivo);

int main(){
    char* matricula = "9020256-8";
    float media_aluno = media(matricula, "./exercicio3data.txt");
    if(media_aluno == -1) printf("A matrícula não foi encontrada\n");
    else printf("A media do aluno de matricula %s é: %.1f", matricula, media_aluno);
    return 0;
}

float media (char* mat, char* nome_arquivo){
    FILE* data = fopen(nome_arquivo, "r");
    if(data == NULL){
        printf("ERRO");
        exit(-2);
    }
    while (1){
        char matricula[10];
        float P1, P2, P3;
        if(fscanf(data, "%10s %f %f %f", matricula, &P1, &P2, &P3) == EOF){
            break;
        }
        else if(!strcmp(mat, matricula)){
            fclose(data);
            return (P1+P2+P3)/3;
        }
    }
    fclose(data);
    return -1;
}