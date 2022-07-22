/* QUESTÃO 2
Faça uma função recursiva para imprimir a soma dos números ímpares de um vetor.*/

#include <stdio.h>
#include <stdlib.h>

int soma(int vet[], int len, int resultado);

int main () {

    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(vet)/sizeof(vet[0]);

    printf("Soma dos numeros impares: %d\n", soma(vet, len, 0)); 

    return 0;
}

int soma(int vet[], int len, int resultado){
    if(len == 0)
        return resultado ;

    else
        if(vet[len - 1] % 2 != 0)
        
            return soma(vet, len -1, resultado + vet[len - 1]);
        else
            return soma(vet, len - 1, resultado);
}