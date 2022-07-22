#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_VETOR 10

int main(){
    int vetor[TAM_VETOR];
    time_t tempo;
    srand((unsigned) (time(&tempo)));

    for(int k = 0; k < TAM_VETOR; k++){
        vetor[k] = rand() % 100;
    }

    int i = 0;
    int j = TAM_VETOR - 1;
    while (j > i)//Execução acaba quando os dois contadores se cruzarem
    {
        printf("%d %d\n", vetor[i], vetor[j]);
        i++;
        j--;
    }
    return 0;
}