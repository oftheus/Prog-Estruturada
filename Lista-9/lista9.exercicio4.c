#define MAX 4
#define MAXNOME 31
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void atribui(char **nomes, int indice, char *nome);
char * get_sobrenome(char *nome);

main(){
    int i;
    char **nomes;
    char *sobrenome;
    nomes = (char **) malloc(MAX*sizeof(char *));
    if(nomes==NULL) exit(3);
    for ( i=0 ; i<MAX ; i++) {
        nomes[i] = (char *) malloc(sizeof(char)*MAXNOME);
        if(nomes[i] == NULL) exit(4);
    }
    atribui(nomes,0,"Fulano Silva"); 
    atribui(nomes,1,"Maria do Carmo");
    atribui(nomes,2,"Beltrano Belmonte");
    atribui(nomes,3,"Pedro dos Santos");
    for (i=0 ; i<MAX ; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d",strlen(sobrenome)>5?i:0); // 2o printf
        free(sobrenome);
    }

    printf("\n%c", nomes[0][3]); // 3o printf
    free(nomes);
}

void atribui(char **nomes, int indice, char *nome){
    nomes[indice] = nome;
}

char * get_sobrenome(char *nome){
    int lenNome = strlen(nome);
    char* sobrenome = (char*) malloc(lenNome * sizeof(char));
    
    for(int i = lenNome; nome[i] != ' '; i--){//Le o nome de trás pra frente até o primeiro espaço
        sobrenome[lenNome - i -1] = nome[i];//Guarda a letra no inicio do vetor sobrenome
    }
    int lenSobrenome = strlen(sobrenome);
    sobrenome = realloc(sobrenome, lenSobrenome*sizeof(char));
    if(sobrenome == NULL) exit(2);
    for(int i = 0; i < lenSobrenome/2; i++){ //O sobrenome é guardado de trás pra frente, precisamos inverter
        int temp = sobrenome[lenSobrenome - i -1];
        sobrenome[lenSobrenome-i-1] = sobrenome[i];
        sobrenome[i] = temp;
    }
    return sobrenome;
}

//c) Carmo 0
//d) Belmonte 2