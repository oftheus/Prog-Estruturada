/*5. Escreva um programa que leia uma linha de caracteres do teclado de tamanho 80. A
linha somente contém letras. Divida a linha em blocos de 5 letras. Dentro de cada bloco o
seu programa deve trocar a primeira letra pela letra seguinte no alfabeto, a segunda letra
por duas letras adiante no alfabeto, a terceira por três letras adiante e assim até a quinta.
Os espaços em branco devem ser retirados da frase. Considere o seguinte exemplo.
1. Frase lida:
EVA VIU A UVA
2. Retirada dos espaços em branco:
EVAVIUAUVA
3. Divisão em blocos de 5 (blocos indicados por tipos diferentes):
EVAVIUAUVA
4. Criptografia:
FXDANVCYAF
Portanto, o que será impresso pelo programa é:
FXDANVCYAF */

#include <stdio.h>
#include <string.h>

int main()
{
    char vetor[80];
    fgets(vetor,80,stdin);

    int cont = 0;
    for  (int i=0;vetor[i];i++){
        if(vetor[i] != ' '){
            vetor[cont++] = vetor[i];
        }
    }
    vetor[cont] = '\0';
    //printf("%s\n",vetor);

    int len = strlen(vetor) - 1,j=1; //numero de letras
    //printf("%d\n",len);


    for(int i=0;i<len;i++)
    {
        if (i==5){
            j=1;
        }
        vetor[i]+=j;
        j++;
    }
    printf("%s\n",vetor);
    return 0;
}
