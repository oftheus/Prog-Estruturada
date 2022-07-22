#include <stdio.h>
#include <stdlib.h>

void bubble(int tam, char numeros[tam])
{
    int aux,cont,i;
    //BUBBLE SORT
    for(cont = 1; cont < tam; cont++){
        for (i=0;i<tam-1;i++){
            if (numeros[i] > numeros[i+1]){
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
            }
        }
    }
    printf("\n");
    printf("\nElementos Ordenados pelo BubbleSort: ");
    for (i = 0;i < tam;i++){
        printf("%c ",numeros[i]);
    }
    printf("\n");
}

void quick(int tam,char numeros[tam])
{
    //QUICK SORT
    if (tam>1){
        int x = numeros[0];
        int a = 1;
        int b = tam-1;
        do{
            while (a < tam && numeros[a] <= x) a++;
            while (numeros[b] > x) b--;
            if (a < b) {
                int temp = numeros[a];
                numeros[a] = numeros[b];
                numeros[b] = temp;
                a++; b--;
            }
        }while (a<=b);
        numeros[0] = numeros[b];
        numeros[b] = x;

        printf("\n");
        printf("Elementos Ordenados pelo QuickSort: ");
        for (int i = 0;i < tam;i++){
            printf("%c ",numeros[i]);
        }
        printf("\n");
    }
}

void compara(const void *x_void, const void *y_void)
{
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return x - y;
}

int main()
{
    printf("Digite o tamanho do vetor: ");
    int tam,aux,cont,i;
    scanf("%d",&tam);
    char numeros[tam];
    for (i=0;i<tam;i++){
        scanf(" %c",&numeros[i]);
    }

    printf("\nOrdem Atual: ");
    for (i=0;i<tam;i++){
        printf("%c ", numeros[i]);
    }
    bubble(tam,numeros);
    quick(tam,numeros);
    qsort(numeros,tam,sizeof(int),compara);
    printf("\nElementos Ordenados pelo qsort: ");
    for (int i=0; i < tam;i++)
        printf("%c ", numeros[i]);
    printf("\n");
    return 0;
}
