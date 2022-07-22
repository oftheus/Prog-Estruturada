/* 

11) Escreva um programa que realize a leitura da idade, da altura e do sexo de n pessoas.
Ao final, mostre o número de mulheres com idade entre 20 e 35 anos e o número de homens com altura
maior que 1,80m. Calcule e mostre também a variância da altura. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int idade, num_pessoas, i = 0, z;
    
    printf("Digite o número de pessoas: ");
    scanf("%d",&num_pessoas);
    
    float altura, media, soma = 0, vetor[num_pessoas], soma_var = 0;
    char s, f = 'F', m = 'M';
    int contador_F = 0, contador_M = 0;
    
    printf("\nDigite os dados das pessoas:\n");

    while (i<num_pessoas){
    	fflush(stdin);
        printf("\nDigite a idade: ");
        scanf("%d",&idade);
        
        printf("Digite a altura(em metros): ");
        scanf("%f",&altura);
        
        printf("Digite o sexo(F/M): ");
        scanf(" %c",&s);
        
        if (f == s){
            if (idade >= 20 && idade <= 35){
                contador_F++;
            }
        }

        if (m == s){
            if (altura > 1.80){
                contador_M++;
            }
        }
        
        soma = soma + altura;
        vetor[i] = altura;
        i++;
    }
    
    media = soma/num_pessoas;
    
    for ( z = 0; z < num_pessoas; z++){
        soma_var = soma_var + ( (vetor[z] - media) * (vetor[z] - media) );
    }
    
    printf("\nNúmero de mulheres com idade entre 20 e 35 anos: %d\n",contador_F);
    printf("\nNúmero de homens com mais de 1,80m: %d\n",contador_M);
    printf("\nVariância da altura: %.3f\n",soma_var/(num_pessoas-1));
    
	return 0;
}
