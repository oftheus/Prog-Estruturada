#include <stdio.h>
#include <stdlib.h>

typedef struct Livro {
    int ano;
    char titulo[100];
    char autor[100];
    int nVolume; // Número de exemplares de um dado livro.
    float preco;
}Livro;

typedef struct Biblioteca {
    Livro **V; // Armazena a informação de n livros !!
    int nLivros // Número de livros existentes na biblioteca.
}Biblioteca;

Livro * fillLivro(){
    Livro* retorno = (Livro*) malloc(sizeof(Livro));
    if(retorno == NULL) exit(1);
    printf("Insira o nome do livro:\n");
    scanf("%s", retorno->titulo);
    printf("Insira o nome do autor:\n");
    scanf("%s", retorno->autor);
    printf("Insira o ano de publicação do livro\n");
    scanf("%d", &retorno->ano);
    printf("Insira o número de volumes do livro:\n");
    scanf("%d", &retorno->nVolume);
    printf("Insira o preço do livro:\n");
    scanf("%f", &retorno->preco);
    return retorno;
}

Biblioteca * fillBiblioteca(int numLivros){
    Biblioteca* retorno = (Biblioteca*) malloc(sizeof(Biblioteca));
    if(retorno == NULL) exit(2);
    retorno->V = (Livro**) malloc(numLivros * sizeof(Livro));
    for(int i = 0; i < numLivros; i++){
        printf("------Livro %d------\n", i+1);
        retorno->V[i] = fillLivro();
    }
    retorno->nLivros = numLivros;
    return retorno;
}

void valorBiblioteca(Biblioteca * b1, int numLivros){
    float montante = 0;
    for(int i = 0; i < numLivros; i++){
        montante += b1->V[i]->nVolume * b1->V[i]->preco;
    }
    printf("Os livros nesta livraria são avaliados em R$%.2f\n", montante);
    return;
}

Livro * maiorBiblioteca(Biblioteca * b1, int numLivros){
    int maiorCopias = 0;
    Livro* retorno = NULL;
    for(int i = 0; i < numLivros; i++){
        if(b1->V[i]->nVolume > maiorCopias){
            retorno = b1->V[i];
            maiorCopias = b1->V[i]->nVolume;
        } 
    }

    return retorno;
}

int main(){
    int numLivros = 3;
    Biblioteca* bib = fillBiblioteca(numLivros);
    valorBiblioteca(bib, numLivros);
    Livro* maisCopias = maiorBiblioteca(bib, numLivros);
    printf("O livro com mais copias é: %s\n", maisCopias->titulo);
    free(maisCopias);
    free(bib);
    return 0;
}