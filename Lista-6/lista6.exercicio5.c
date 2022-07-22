#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char* cifra_cesar(char* msg);

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char* msg = "zebra";

    printf("A palavra cifrada é: %s", cifra_cesar(msg));
    return 0;
}

char* cifra_cesar(char* msg){
    int n = strlen(msg);
    char * msg_cifrada = (char *) malloc((n+1) * sizeof(char));
    if(msg_cifrada == NULL){
        printf("Não foi possível alocar a memoria para a mensagem cifrada");
        exit(-1);
    }
    strcpy(msg_cifrada, msg);
     
    int i = 0;
    while (msg[i] != '\0'){
        if(msg[i] == 'x'){
            msg_cifrada[i] = 'a';
        } else if(msg[i] == 'y'){
            msg_cifrada[i] = 'b';
        } else if(msg[i] == 'z'){
            msg_cifrada[i] = 'c';
        }else{
            msg_cifrada[i] = msg[i] + 3;
        }
        /*if(msg_cifrada[i] > 'Z' && msg_cifrada[i] < 'a'){
            msg_cifrada[i] = 'A' + (msg_cifrada[i] - 'Z');
        } else if(msg_cifrada[i] > 'z'){
            msg_cifrada[i] = 'a' + (msg_cifrada[i] - 'z');
        }*/
        i++;
    }

    return msg_cifrada;
}