#include <stdio.h>
#include <stdlib.h>
    
    void lerMatriz(int *mat, int lin, int col)
	{
        int i, j;
        for (i = 0; i < lin; i = i + 1)
            for (j = 0; j < col; j = j + 1) scanf("%d", &mat[i * col + j]);
   }
   
   void somarMatrizes(int *a, int *b, int *c, int lin, int col)
   {
       int i, j, k;
       for (i = 0; i < lin; i = i + 1)
       {
           k = i * col;
           for (j = 0; j < col; j = j + 1)
               c[k + j] = a[k + j] + b[k + j];
           }
   }
   
   void escreverMatriz(int *mat, int lin, int col)
   {
    	int i, j, k;
    	for (i = 0; i < lin; i = i + 1)
    	{
        	k = i * col;
            for (j = 0; j < col; j = j + 1){
        		printf("%3d", mat[k + j]);
		    }
            printf("\n");
       }
   }
   
   
   void somarDiagonalMatriz(int *a, int lin, int col)
   {
   		if(lin == col){
   			int i, soma=0;
	    	for( i = 0; i < lin; i++ ) {
	        	soma += a[i][i]; 
	    	}
	    	printf("\nA soma da diagonal da matriz �: %d\n",soma);
		}
        else{
        	printf("N�o � poss�vel somar a diagonal principal!");
		}
   }
   
   void multiplicarMatrizes(int *a, int *b, int *c, int lin, int col)
   {
   		if(lin == col){
        	int i, j, x, aux=0;
	        for(i = 0; i < lin; i++) {
				for(j = 0; j < col; j++) {
					
					c[i][j] = 0; 
					for(x = 0; x < lin; x++) {
						aux +=  a[i][x] * b[x][j];
					}
		
					c[i][j] = aux;
					aux = 0;
				}
			}
			
			for(i = 0; i < lin; i++) {
				for(j = 0; j < col; j++) {
					printf("%d", c[i][j]);
				}
			}	
    	}   	
		else{
        	printf("N�o � poss�vel multiplicar as matrizes!");			
		}	
   }
   
   
   int main(void)
   {
    	int lin, col, *m1, *m2, *m3, *m4;
    	
    	printf("Digite a quantidade de linhas das matrizes: ");
    	scanf("%d", &lin);
    	
    	printf("Digite a quantidade de colunas das matrizes: ");
    	scanf("%d", &col);
    	
    	m1 = (int *)malloc(sizeof(int) * lin * col);
    	m2 = (int *)malloc(sizeof(int) * lin * col);
    	m3 = (int *)malloc(sizeof(int) * lin * col);
		m4 = (int *)malloc(sizeof(int) * lin * col);
		    	
    	printf("\nDigite a primeira matriz: \n");
    	lerMatriz(m1, lin, col);
    	printf("\nMatriz 1: \n");
    	escreverMatriz(m1, lin, col);
    	
    	printf("\nDigite a segunda matriz: \n");
    	lerMatriz(m2, lin, col);
    	printf("\nMatriz 2: \n");
		escreverMatriz(m2, lin, col);
		
		printf("\n");
	    somarMatrizes(m1, m2, m3, lin, col);
	    printf("\nMatriz Soma: \n");
	    escreverMatriz(m3, lin, col);
	    
	    
	    somarDiagonalMatriz(m1, lin, col);
	    somarDiagonalMatriz(m2, lin, col);
		
	    
	    multiplicarMatrizes(m1, m2, m4, lin, col);
		
	    
	    free(m1);
	    free(m2);
	    free(m3);
	    free(m4);
	    
		return 0;
 }
