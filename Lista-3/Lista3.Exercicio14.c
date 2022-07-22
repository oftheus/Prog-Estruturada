/* 

14) Um cinema que possui capacidade de 100 lugares está quase sempre lotado.
Certo dia cada espectador respondeu a um questionário, onde constava:
	- sua idade;
	- sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.

Elabore um programa que, recebendo estes dados calcule em funções e mostre:
	a. a quantidade de respostas ótimo;
	b. a diferença percentual entre respostas bom e regular;
	c. a média de idade das pessoas que responderam ruim;
	d. a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
	e. a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu
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
    printf("\n  a = Ótimo");
    printf("\n  b = Bom");
    printf("\n  c = Regular");
    printf("\n  d = Ruim");
    printf("\n  e = Péssimo\n\n");

    for( i = 1; i <= 10; i++ )
	{
        printf("\n%d - Sua idade: ", i);
        scanf("%d", &idade);
        
        do{
            fflush(stdin);
            printf("Sua opinião sobre o filme: ");
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
    
    printf("\n\nQuantidade de respostas Ótimo: %d", otimo);
    printf("\nDiferença percentual entre respostas Bom e Regular: %d%%",(bom - regular));
    printf("\nMédia de idade das pessoas que responderam Ruim: %.2f", (somaIdadeRuim / ruim));
    printf("\nPorcentagem de respostas Péssimo: %d%%", pessimo);
    printf("\nMaior idade que utilizou a opção Péssimo: %d", maiorPessimo);
    printf("\nDiferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d",abs((maiorOtimo - maiorRuim)));

    printf("\n\n");

    return 0;
}

