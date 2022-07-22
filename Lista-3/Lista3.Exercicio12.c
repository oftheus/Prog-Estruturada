/*

12) Fazer um programa para receber uma frase do usuário, caracter a caracter usando getch() e
armazenando no vetor (máx. 80 caracteres). Quando o usuário digita enter (‘\r’) a recepção é
finalizada. Mostrar cada palavra da frase em uma linha separada. 

*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char s,vetor[81];
    int i=0;
    for (i;i<80;i++)
    {
        printf("Digite um caracter: \n");
        vetor[i]=getch();
        if (vetor[i]=='\r')
        {
            break;
        }
        printf("Caractere '%c' armazenado\n",vetor[i]);
    }
    vetor[i] = '\0';

    printf("\nPalavras separadas:\n");

    for (i=0;vetor[i] != '\0';i++)
    {
        if (vetor[i]== ' '){
            printf("\n");
        }
        else{
            printf("%c", vetor[i]);
        }
    }
    return 0;
}
