#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main(){
    FILE* commentedFile = fopen("exercicio4data.c", "r");
    if(commentedFile == NULL){
        printf("ERRO");
        return -1;
    }
    FILE* uncommentedFile = fopen("exercicio4uncommented.txt", "w+");

    char line[MAX_LINE_LENGTH];
    while (1)
    {
        if(fscanf(commentedFile, "%s", line) == EOF) break;
        for(int i = 0; line[i] != '\0'; i++){
            if(line[i] == '/' && line[i+1] == '/'){
                i++;
                continue;
            }
            fputc(line[i], uncommentedFile);
        }
        fputc('\n', uncommentedFile);
    }
    

    fclose(uncommentedFile);
    fclose(commentedFile);
    return 0;
}