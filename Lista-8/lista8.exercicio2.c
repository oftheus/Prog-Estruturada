#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin,col,num;
    printf("Digite a quantidade de linhas da primeira matriz: ");
    scanf("%d",&lin);
    printf("Digite a quantidade de colunas da primeira matriz: ");
    scanf("%d",&col);
    int m1[10][10];
    printf("Digite a primeira matriz: ");
    for(int i=0;i<lin;i++)
    {
       for(int j=0;j<col;j++)
        {
            scanf("%d",&num);
            m1[i][j]=num;
        }
    }
    printf("\n");
    int lin2,col2,num2;
    printf("Digite a quantidade de linhas da segunda matriz: ");
    scanf("%d",&lin2);
    printf("Digite a quantidade de colunas da segunda matriz: ");
    scanf("%d",&col2);
    int m2[10][10];
    printf("Digite a segunda matriz: ");
    for(int y=0;y<lin2;y++)
    {
       for(int k=0;k<col2;k++)
        {
            scanf("%d",&num2);
            m2[y][k]=num2;
        }
    }
    int soma[lin][col];
    if (lin==lin2 && col==col2){
        for(int r=0;r<lin;r++){
            for(int u=0;u<col;u++){
                soma[r][u]=m1[r][u]+m2[r][u];
            }
        }
        printf("\nMatriz soma:\n");
        for(int r=0;r<lin;r++){
            for(int u=0;u<col;u++){
               printf("%d ",soma[r][u]);
                if (u==col-1){
                    printf("\n");
                }
            }
        }
    }
    else{
        printf("Erro!\nSoma somente de matrizes com mesmo numero de linhas e colunas\n");
    }
    return 0;
}
