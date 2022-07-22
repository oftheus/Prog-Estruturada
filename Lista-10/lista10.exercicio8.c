#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _ALUNO {
    char nome [81];
    float nota1 , nota2;
} ALUNO;

void incluiAluno(FILE* data);
void alteraAluno(FILE* data);
void imprimeAlunos(FILE* data);
void excluiAluno(FILE* data);
void mediaMaior(FILE* data);
int main(){
    FILE* data = fopen("exercicio10data.bin", "ab");
    if(data == NULL){
        printf("ERRO");
        return -1;
    }

    while (1)
    {
        int escolha = 0;
        printf("Selecione uma das seguintes opções\n");
        printf("1-Incluir 2-Alterar 3-Consultar 4-Excluir 5-Sair\n>");
        scanf("%d", &escolha);
        switch (escolha){
        case 1:
            incluiAluno(data);
            break;
        case 2:
            alteraAluno(data);
            break;
        case 3:
            imprimeAlunos(data);
            break;
        case 4:
            /* code */
            break;
        case 5:
            mediaMaior(data);
            fclose(data);
            return 0;
            break;
        default:
            printf("Escolha uma opção válida\n");
            break;
        }    
    }
    
}

void incluiAluno(FILE* data){
    fseek(data, 0, SEEK_END);//move o cursor até o final do arquivo
    ALUNO* novoAluno = (ALUNO*) malloc(sizeof(ALUNO));
    if(novoAluno == NULL) exit(-2); 

    
    printf("Insira o nome do aluno:\n");
    scanf("%80s", novoAluno->nome);

    printf("Insira a nota 1:\n");
    scanf("%f", &novoAluno->nota1);

    printf("Insira a nota 2:\n");
    scanf("%f", &novoAluno->nota2);

    fprintf(data, "%s,%f,%f\n", novoAluno->nome, novoAluno->nota1, novoAluno->nota2);
    free(novoAluno);
    return;
}

void alteraAluno(FILE* data){
    fseek(data, 0, SEEK_SET);
    char nomeProcurar[81];
    printf("Insira o nome do aluno a ser alterado");
    scanf("%80s", nomeProcurar);

    ALUNO* alunoAltera = (ALUNO*) malloc(sizeof(ALUNO));

    while (fscanf(data, "%s,%f,%f", alunoAltera->nome, &alunoAltera->nota1, &alunoAltera->nota2) != EOF){
        if(!strcmp(alunoAltera->nome, nomeProcurar)){
            printf("Insira o nome do aluno:\n");
            scanf("%80[^\n]s", alunoAltera->nome);

            printf("Insira a nota 1:\n");
            scanf("%f", &alunoAltera->nota1);

            printf("Insira a nota 2:\n");
            scanf("%f", &alunoAltera->nota2);

            fseek(data, 0, SEEK_CUR);
            fprintf(data, "%s,%f,%f\n", alunoAltera->nome, alunoAltera->nota1, alunoAltera->nota2);
            free(alunoAltera);
            return;
        }
    }
    printf("Aluno %s não pode ser encontrado.\n");
    free(alunoAltera);
    return;
}

void imprimeAlunos(FILE* data){
    fseek(data, 0, SEEK_SET);
    char nome[81];
    float nota1, nota2;

    while (fscanf(data, "%s,%f,%f", nome, &nota1, &nota2) != EOF){
        printf("Nome: %s\nnota 1: %f\n nota 2: %f\n", nome, nota1, nota2);
        printf("\n");
    }
    return;
}

void excluiAluno(FILE* data){
    fseek(data, 0, SEEK_SET);
    char nomeProcurar[81];
    printf("Insira o nome do aluno a ser excluido");
    scanf("%80s", nomeProcurar);
    FILE* temp = fopen("temp", "ab");//cria um novo arquivo sem a linha do aluno excluido
    char nome[81];
    float nota1, nota2;
    while (fscanf(data, "%s,%f,%f", nome, &nota1, &nota2) != EOF){
        if(!strcmp(nome, nomeProcurar)){
            continue;
        }
        else{
            char line[100];
            fgets(line, 100, data);
            fputs(line, temp);
        }
    }

    FILE* toDelete = data;
    data = temp;
    remove("exercicio10data.bin");
    rename("temp", "exercicio10data.bin");
}

void mediaMaior(FILE* data){
    char nome[81];
    float nota1, nota2;
    while (fscanf(data, "%s,%f,%f", nome, &nota1, &nota2) != EOF){
        if((nota1 + nota2)/2 > 6) printf("%s tem média maior que 6", nome);
    }
}