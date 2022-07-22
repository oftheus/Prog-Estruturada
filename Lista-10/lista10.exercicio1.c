#include <stdio.h>
#include <stdlib.h>
struct funcionario {
    char nome[81]; /* nome do funcionário */
    float valor_hora; /* valor da hora de trabalho em Reais */
    int horas_mes; /* horas trabalhadas em um mês */
};
typedef struct funcionario Funcionario;

void carrega (int n, Funcionario** vet, char* arquivo);

#define TAM 3

int main(){
    Funcionario* funcionarios[TAM];
    for(int i = 0; i < TAM; i++) funcionarios[i] = NULL;

    carrega(TAM, funcionarios, "./exercicio1data.txt");
    
    for(int i = 0; i < TAM; i++){
        printf("%s\n%.2f %d\n", funcionarios[i]->nome, funcionarios[i]->valor_hora, funcionarios[i]->horas_mes);
        free(funcionarios[i]);
    }
    return 0;
}

void carrega (int n, Funcionario** vet, char* arquivo){
    FILE* data = fopen(arquivo, "r");
    if(data == NULL){
        printf("ERRO: não foi possível ler o arquivo");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        vet[i] = (Funcionario*) malloc(sizeof(Funcionario));
        if(vet[i] == NULL) exit(2);
        fscanf(data, "%81[^\n]s", vet[i]->nome);//lê primeiro o nome
        fscanf(data, "%f %d", &vet[i]->valor_hora, &vet[i]->horas_mes);//depois as informações
        fscanf(data, "%s[\n]", NULL);//lê o \n restante
    }
    fclose(data);
    return;
}