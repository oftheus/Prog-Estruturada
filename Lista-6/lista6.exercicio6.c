#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void bubblesort(int * vet, int n);

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n = 0;
    printf("Por favor insira um valor inteiro\n>");
    scanf("%d", &n);

    int * vetor = (int*) malloc(n*sizeof(int));
    if(vetor == NULL){
        printf("Não foi possivel alocar o vetor!");
        exit(-1);
    }
    time_t seed;
    srand((unsigned)time(&seed));

    for(int i = 0; i < n; i++){
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    printf("\n");
    //Ao ordenar o vetor, colocamos as repetições em sequência
    bubblesort(vetor, n);

    int conta_rept = 0;
    int igualdade = 0;

    int * repetidos = (int*) malloc(n*sizeof(int));
    if(repetidos == NULL){
        printf("Não foi possivel alocar o vetor dos valores repetidos");
        exit(-1);
    }
    for(int i = 0; i < n; i++){
        //Verifica se há um numero repetido na sequencia
        //caso a igualdade já tenha sido verificada, continue
        if(vetor[i] == vetor[i+1] && igualdade == 0){
           repetidos[conta_rept] = vetor[i];
           conta_rept++;
           igualdade = 1;
        } else if(vetor[i] == vetor[i+1] && igualdade == 1){
            continue;
        }else igualdade = 0;
    }

    realloc(repetidos, conta_rept);
    if(repetidos == NULL){
        printf("Não foi possível realocar o vetor dos valores repetidos.");
        exit(-2);
    }
    for(int i = 0; i < conta_rept; i++){
        printf("%d ", repetidos[i]);
    }

    free(vetor);
    free(repetidos);
    return 0;
}

//bubblesort usado somente pela rapidez de implementação
void bubblesort(int * vet, int n){
    for(int i = 0; i < n; i++){
        int troca = 0;
        for(int j = 0; j < n - 1 - i ; j++){
            if(vet[j] > vet[j+1]){
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                troca = 1;
            }
        }
        if(troca == 0) break;
    }
}