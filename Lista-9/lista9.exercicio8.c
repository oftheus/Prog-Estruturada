#include <stdio.h>
#include <stdlib.h>

struct data {
    int dd, mm, aa; /* Dia, mes e ano */
};
typedef struct data Data;

struct compromisso {
    char descricao[81]; /* Descricao do compromisso */
    Data dta; /* Data do compromisso */
};
typedef struct compromisso Compromisso;

Compromisso* busca(int n, Compromisso** vet, int d, int m, int a){
    int inicio = 0;
    int fim = n;
    int dataBusca = a*10000 + m*100 + d; //Escreve a data como um número no formato aaaaWmmdd
    while (inicio < fim){
        int meio = (inicio+fim)/2;
        int dataCompromisso = vet[meio]->dta.aa*10000 + vet[meio]->dta.mm*100 + vet[meio]->dta.dd;
        
        if(dataCompromisso < dataBusca){
            inicio = meio + 1;
        } else if(dataCompromisso > dataBusca){
            fim = meio;
        } else{
            return vet[meio];
        }
    }
    return NULL;
}