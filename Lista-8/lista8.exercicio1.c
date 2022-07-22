#include <stdio.h>
#include <stdlib.h>

void soma(int matriz[10][10],int lin,int col);

int main()
{
    int lin,col,num;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&lin);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&col);
    int m[10][10];
    printf("Digite a matriz: ");
    for(int i=0;i<lin;i++)
    {
       for(int j=0;j<col;j++)
        {
            scanf("%d",&num);
            m[i][j]=num;
        }
    }
    /*int y,f;
    for(y=0;y<lin;y++){
        for(f=0;f<col;f++){
            printf("%d ",m[y][f]);
        }
        printf("\n");
    }*/
    soma(m,lin,col);
    return 0;
}

void soma(int matriz[10][10],int lin,int col)
{
    int vetor[lin];
    for(int i=0;i<lin;i++)
    {
        int s=0;
        for(int j =0;j<col;j++)
        {
            s = s + matriz[i][j];
            vetor[i]=s;
        }
        printf("\nSoma dos elementos da linha %d eh %d",i+1,s );
    }
    int sum=0;
    for(int i=0;i<lin;i++)
    {
        if (i<(lin-1)){
            if (vetor[i]==vetor[i+1]){
                sum+=1;
            }
        }
    }
    //printf("\n%d",sum);
    if (sum==(lin-1)){
        printf("\n\nLinhas apresentam a mesma soma\n");
    }
    else{
        printf("\n\nLinhas apresentam somas diferentes\n");
    }
}
