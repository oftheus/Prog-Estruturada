#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lin,col,num,cont=1;
    int m1[10][10];
    int m2[10][10];
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&lin);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&col);
    printf("Digite a matriz: ");
    for(int i=0;i<lin;i++)
    {
       for(int j=0;j<col;j++)
        {
            scanf("%d",&num);
            m1[i][j]=num;
        }
    }
    for (int i = 0; i < lin; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            m2[j][i] = m1[i][j];
        }
    }

    printf("\nMatriz Original: \n");
    for (int i = 0; i < lin; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d  ", m1[i][j]);
            if (j == col - 1)
            {
                printf("\n");
            }
        }
    }

    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < lin; ++j)
        {
            printf("%d  ", m2[i][j]);
            if (j == lin - 1)
            {
                printf("\n");
            }
        }
    }

    for(int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(m1[i][j] != m2[i][j])
            {
                cont = 0;
                break;
            }
        }
    }
    if(cont == 1 ){
            printf("\nSão iguais\n");
    }
    else{
        printf("\nNão são iguais\n");
    }
    return 0;
}
