#include <stdio.h>

int main(){
    int vetor[10] = {};

    for(int i = 0; i < 10; i++){
        printf("Insira o elemento número %d\n>", i+1);
        scanf("%d", &vetor[i]);
    }

    int vetorInvertido[10] = {};

    for(int i = 0; i < 10; i++){
        vetorInvertido[i] = vetor[9-i];
    }

    

    printf("O vetor invertido é: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetorInvertido[i]);
    }

    return 0;
}