#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pessoa {
    int codigo;
    char nome[81];
};

typedef struct pessoa Pessoa;

Pessoa** inicializaVetor(int tam);
void populaVetor(Pessoa** vetor, int tam);
Pessoa* busca(int n, Pessoa** vet, int codigo);
void bubbleSort(Pessoa** vetor, int tam);

int main(){
    int numElem = 10;
    Pessoa** pessoas = inicializaVetor(numElem);
    populaVetor(pessoas, numElem);
    bubbleSort(pessoas, numElem);
    for(int i = 0; i < numElem; i++){
        printf("Codigo= %d\n", pessoas[i]->codigo);
        printf("Nome: %s\n\n", pessoas[i]->nome);
    }

    int codigo = 0;
    printf("Insira o código que você deseja pesquisar\n>");
    scanf("%d", &codigo);

    if(busca(numElem, pessoas, codigo) == NULL){
        printf("O elemento não pertence ao vetor.");
    } else{
        printf("O elemento pertence ao vetor!");
    }

    for(int i = 0; i < numElem; i++){
        free(pessoas[i]);
    }
    free(pessoas);
    return 0;
}

Pessoa** inicializaVetor(int tam){
    Pessoa** vetor = (Pessoa**) malloc(tam * sizeof(Pessoa*));
    if(vetor == NULL) exit(1);
    for(int i = 0; i < tam; i++){
        vetor[i] = (Pessoa*) malloc(sizeof(Pessoa));
        if(vetor[i] == NULL) exit(2);
    }
    return vetor;
}

void populaVetor(Pessoa** vetor, int tam){
    for(int i = 0; i < tam; i++){
        time_t seed;
        srand((unsigned) time(seed)+i);
        vetor[i]->codigo = rand()%1000+1;

        //preenche o nome com as primeira 10 letras do alfabeto
        for(int j = 0; j < i+1; j++){
            vetor[i]->nome[j] = 'a' + j;
        }
    }
}

void bubbleSort(Pessoa** vetor, int tam){
    for(int i = 0; i < tam; i++){
        int troca = 0;
        for(int j = 0; j+1<tam; j++){
            if(vetor[j]->codigo > vetor[j+1]->codigo){
                Pessoa* temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
                troca = 1;
            }
        }
        if(troca == 0) break;
    }
}

Pessoa* busca(int n, Pessoa** vet, int codigo){
    int inicio = 0;
    int fim = n;
    while (inicio < fim){
        int meio = (inicio+fim)/2;
        if(vet[meio]->codigo < codigo){
            inicio = meio + 1;
        } else if(vet[meio]->codigo > codigo){
            fim = meio;
        } else{
            return vet[meio];
        }
    }
    return NULL;
}