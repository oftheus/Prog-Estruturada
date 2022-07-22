#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char *compactar(char *s);
int letra(char c);

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char frase[100];
    printf("Por favor insira a frase a ser compactada.\n>");
    scanf("%99[^\n]s", frase);

    char* frase_compacta = compactar(frase);
    if(frase_compacta == NULL){
        printf("Por favor, use somente letra e espaços.");
        return(-1);
    } else{
        printf("\"");
        int i = 0;
        while (frase_compacta[i] != 0)
        {
            printf("%c", frase_compacta[i]);
            i++;
        }
        
        printf("\"");
    }
    free(frase_compacta);
    return 0;
}

char *compactar(char *s){
    int i = 0;
    int encontrou_letra = 0;
    int primeira_letra = 0;
    int ultima_letra = 0;
    do{
        if(letra(s[i]) || s[i] == ' ')
        {
            if(letra(s[i]) && encontrou_letra == 0){
                //Marca a posição da primeira letra encontrada
                primeira_letra = i;
                encontrou_letra = 1;
            } 
            if(letra(s[i])){
                //Marca a posição da última letra encontrada
                ultima_letra = i;
            }
        }
        else{
            return NULL;
        }
        i++;
    }while (s[i] != '\0');
    
    int tam_novo_vet = ultima_letra - primeira_letra + 2; //+1 para incluir a ultima letra, +1 para ter espaço para o \0
    char* novo_vet = (char*) malloc((tam_novo_vet + 1) * sizeof(char));
    if(novo_vet == NULL){
        printf("ERRO: Não foi possível alocar o novo vetor!");
        exit(1);
    }
    
    for(int j = 0; j < tam_novo_vet -1; j++){//reserva o byte para o \0
        novo_vet[j] = s[primeira_letra + j];
    }
    novo_vet[tam_novo_vet] = '\0';
    
    return novo_vet;
}


int letra(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');;
}