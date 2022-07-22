/*

2) Escreva um programa em C para ler um vetor R (de 5 elementos) e um vetor S (de 10
elementos). Gere um vetor X que possua os elementos comuns a R e a S. Considere que pode
existir repeti��o de elementos no mesmo vetor. Nesta situa��o somente uma ocorr�ncia do
elemento comum aos dois deve ser copiada para o vetor X. Ap�s o t�rmino da c�pia, escrever o
vetor X.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
	int R[5], S[10], *X, i, j;
	
	X = (int*) malloc(5*sizeof(int));
	
	if(X == NULL){ exit(1);}
	
    for(i = 0; i < 5; i++){
        printf("Insira o n�mero %d do vetor R: ", i+1);
        scanf("%d", &R[i]);
    }

	printf("\n");
	
    for(i = 0; i < 10; i++){
        printf("Insira o n�mero %d do vetor S: ", i+1);
        scanf("%d", &S[i]);
    }
    
    printf("\n");


    int conta_repet = 0;
    for(i = 0; i < 5; i++){
    	
    	for(j = 0; j < 10; j++){
    		
    		if(R[i] == S[j]){
    			
    			if(R[i] != X[i]){
    				X[conta_repet] = R[i];
                    conta_repet++;	
				} 
			}
        }
    }
    X = realloc(X, conta_repet);
    if(X == NULL){exit(1);}
    for(i = 0; i < conta_repet; i++){
        printf("%d ",X[i]);
    }
    free(X);    
    return 0;
}

