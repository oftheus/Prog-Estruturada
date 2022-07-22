#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * estado[27] = {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA",
"PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};

typedef struct assalariados {
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;

Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado);
void relatorio(Assalariados ** ptr, int numAssalariados);
void imprime(Assalariados ** ptr, int numAssalariados);

int main(void) {
    Assalariados **pessoas;
    int numAssalariados=3;
    pessoas = (Assalariados **) malloc (numAssalariados * sizeof(Assalariados *));
    if(pessoas == NULL) exit(1);
    pessoas[0] = cadastra("Fulano de tal", 'M',45,1500.00, "RJ");
    pessoas[1] = cadastra("Ciclano", 'M',50,2500.00, "RS");
    pessoas[2] = cadastra("Beltrano", 'M',42,500.00, "RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas,numAssalariados);
    for(int i = 0; i < numAssalariados; i++){
        //como a função cadastra possui um malloc, precisamos liberar esse memória ao fim da execução
        free(pessoas[i]);
    }
    free(pessoas);
    return 0;
}

Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado){
    Assalariados* novaPessoa = (Assalariados*) malloc(sizeof(Assalariados));
    if(novaPessoa == NULL) exit(2);
    strcpy(novaPessoa->nome, nome);
    novaPessoa->sexo = sexo;
    novaPessoa->idade = idade;
    novaPessoa->salario = salario;
    strcpy(novaPessoa->estado, estado);

    return novaPessoa;
}

void relatorio(Assalariados ** ptr, int numAssalariados){
    for(int i = 0; i < 27; i++){
        int count = 0;
        for(int j = 0; j < numAssalariados; j++){
            char* estadoPessoa = ptr[j]->estado;
            char* estadoLista = estado[i];
            //strcmp retorna 1 quando é diferente, queremos o inverso disto
            if(!strcmp(estadoPessoa, estadoLista) && ptr[j]->sexo == 'M' && ptr[j]->idade > 40 && ptr[j]->salario > 1000){
                count++;
            }
        }
        if(count > 0) printf("Estado=%s com %d homens maiores de 40 anos e salário maior que R$ 1000,00\n", estado[i], count);
    }
}
void imprime(Assalariados ** ptr, int numAssalariados){
    for(int i = 0; i < numAssalariados; i++){
        printf("Assalariado %d:\n", i+1);
        printf("Nome: %s\n", ptr[i]->nome);
        printf("Idade: %d\n", ptr[i]->idade);
        printf("Sexo: %c\n", ptr[i]->sexo);
        printf("Salário: %.2f\n", ptr[i]->salario);
        printf("Estado: %s\n", ptr[i]->estado);
        printf("\n");
    }
}