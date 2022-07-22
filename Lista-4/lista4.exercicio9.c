#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* leValores();
void listaValores(int* vet, int n);
int busca(int* vet, int n, int valorBusca);
int* somaAnterior(int *vet, int n);

int main(){
    int * vetor = leValores();
    listaValores(vetor, 7);
    
    int valor = 0;
    printf("Insira um valor para buscar.\n>");
    scanf("%d", &valor);

    int pos = busca(vetor, 7, valor);

    if(pos == -1){
        printf("O valor %d não está no array\n", valor);
    } else{
        printf("O valor %d está na posição %d do array\n", valor, pos);
    }
    
    int* vetorSoma = somaAnterior(vetor, 7);

    listaValores(vetorSoma, 7);

    free(vetorSoma);
    free(vetor);
    return 0;
}

int* leValores(){
    int * vetor = (int*) malloc(7*sizeof(int));
    if(vetor == NULL){
        printf("Não foi possível alocar a memória do vetor");
        exit(-1);
    }
    int temp;
    for(int i = 0; i < 7; i++){
        printf("Por favor insira o %d valor\n>", i+1);
        scanf("%d", &temp);
        vetor[i] = temp;
    }
    printf("\n");
    return vetor;
}

void listaValores(int* vet, int n){
    for(int i = 0; i < n; i++){
        printf("pos %d = %d\n", i, vet[i]);   
    }
}

//Como usaremos um vetor pequeno,
//podemos usar um metodo de busca menos eficiente
int busca(int* vet, int n, int valorBusca){
    for(int i = 0; i < n; i++){
        if(vet[i] == valorBusca){
            return i;
        } 
    }
    return -1;
}

int* somaAnterior(int *vet, int n){
    int* vetorSoma = (int*) malloc(n*sizeof(int));
    if(vetorSoma == NULL){
        printf("Não foi possível alocar a memória do vetor");
        exit(-1);
    }
    int soma = 0;
    for(int i = 0; i < n; i++){
        vetorSoma[i] = vet[i] + soma;
        soma += vet[i];
    }
    return vetorSoma;
}