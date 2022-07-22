/*4. Implemente um programa que leia do usuário vários nomes completos de pessoas,
até que o usuário digite a palavra “fim”. Esses nomes devem ser armazenados em um
vetor. Imprima no final a média e a variância do tamanho dos nomes.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vetor[100][100];
    char fim[]="fim";
    int cont=0;
    float val,med=0,var=0;
    printf("Digite os nomes: \n");
    for (int i=0;i<100;i++){
        gets(vetor[i]);
        if(strcmp(vetor[i],fim)==0){
            i=99;
            break;
        }
        cont++;
    }
    for (int j=0;j<cont;j++){
        val = strlen(vetor[j]);
        med += val;
    }
    float media = med/cont;
    printf("\nMedia = %.1f\n", media);

    for(int z=0;z<cont;z++){
        var = var + ((strlen(vetor[z]) - media) * (strlen(vetor[z]) - media));
    }

    printf("\nVariância de nomes: %.3f\n",var/(cont));
    return 0;
}
