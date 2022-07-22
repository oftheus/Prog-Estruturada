/* 

14) Um cinema que possui capacidade de 100 lugares est� quase sempre lotado.
Certo dia cada espectador respondeu a um question�rio, onde constava:
	- sua idade;
	- sua opini�o em rela��o ao filme, que podia ser: �timo, bom, regular, ruim ou p�ssimo.

Elabore um programa que, recebendo estes dados calcule em fun��es e mostre:
	a. a quantidade de respostas �timo;
	b. a diferen�a percentual entre respostas bom e regular;
	c. a m�dia de idade das pessoas que responderam ruim;
	d. a porcentagem de respostas p�ssimo e a maior idade que utilizou esta op��o;
	e. a diferen�a de idade entre a maior idade que respondeu �timo e a maior idade que respondeu
	ruim.
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    char nota;
    int idade, otimo = 0, maiorOtimo = 0, bom = 0, regular = 0, maiorRuim = 0, pessimo = 0, maiorPessimo = 0, i;
    float somaIdadeRuim = 0, ruim = 0;

    printf("---> Questionario do Cinema <---\n\n");

    printf("Nota:");
    printf("\n  a = �timo");
    printf("\n  b = Bom");
    printf("\n  c = Regular");
    printf("\n  d = Ruim");
    printf("\n  e = P�ssimo\n\n");

    for( i = 1; i <= 10; i++ )
	{
        printf("\n%d - Sua idade: ", i);
        scanf("%d", &idade);
        
        do{
            fflush(stdin);
            printf("Sua opini�o sobre o filme: ");
            scanf("%c", &nota);
            
        }while( (nota != 'a') && (nota != 'b') && (nota != 'c') && (nota != 'd') && (nota != 'e') );

        if( nota == 'a' ){
            otimo++;

            if( idade >= maiorOtimo )
                maiorOtimo = idade;
        }

        else if( nota == 'b' ){
            bom++;
		}
		
        else if( nota == 'c' ){
        	regular++;	
		}

        else if( nota == 'd' ){
            ruim++;
            somaIdadeRuim = somaIdadeRuim + idade;
            
            if( idade >= maiorRuim )
                maiorRuim = idade;
        }
        
        else{
            pessimo++;

            if( idade >= maiorPessimo )
                maiorPessimo = idade;
        }
        fflush(stdin);
    }
    
    printf("\n\nQuantidade de respostas �timo: %d", otimo);
    printf("\nDiferen�a percentual entre respostas Bom e Regular: %d%%",(bom - regular));
    printf("\nM�dia de idade das pessoas que responderam Ruim: %.2f", (somaIdadeRuim / ruim));
    printf("\nPorcentagem de respostas P�ssimo: %d%%", pessimo);
    printf("\nMaior idade que utilizou a op��o P�ssimo: %d", maiorPessimo);
    printf("\nDiferen�a de idade entre a maior idade que respondeu �timo e a maior idade que respondeu Ruim: %d",abs((maiorOtimo - maiorRuim)));

    printf("\n\n");

    return 0;
}

