#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam = 0,cont_inv=0;
    char str[100];
    printf("USUARIO: ");
    fgets(str, 100, stdin);

    tam = 0;

    while(str[tam ] != '\0'){
        if(str[tam ] == '\n')
            str[tam ] = '\0';
        tam ++;
    }

    tam = 0;
    while(str[tam ] != '\0'){
        tam++;
    }

    int i, flag = 0;
    for (i = 0; i < tam; ++i){
        if(str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd'
        || str[i] == 'e' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h'
        || str[i] == 'i' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l'
        || str[i] == 'm' || str[i] == 'n' || str[i] == 'o' || str[i] == 'p'
        || str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't'
        || str[i] == 'u' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x'
        || str[i] == 'y' || str[i] == 'z' || str[i] == 'A' || str[i] == 'B'
        || str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F'
        || str[i] == 'G' || str[i] == 'H' || str[i] == 'I' || str[i] == 'J'
        || str[i] == 'K' || str[i] == 'L' || str[i] == 'M' || str[i] == 'N'
        || str[i] == 'O' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R'
        || str[i] == 'S' || str[i] == 'T' || str[i] == 'U' || str[i] == 'V'
        || str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z'
        || str[i] == 'O' || str[i] == '1' || str[i] == '2' || str[i] == '3'
        || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7'
        || str[i] == '8' || str[i] == '9'){
            flag++;
        }
    }
    //printf("%d\n",flag);
    //printf("%d\n",tam);
    if (flag!=tam){
        printf("USUARIO INVALIDO\n");
    }
    else if(flag==tam && tam>=9){
        printf("USUARIO INVALIDO\n");
    }
    else if(flag==tam && tam<9){
        printf("USUARIO CADASTRADO\n");
    }
    return 0;
}
