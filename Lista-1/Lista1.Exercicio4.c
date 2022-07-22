/* 

4) Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um professor e indicar: a média, se está aprovado/reprovado e se tem direito de realizar a VS.
Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os resultados solicitados. Posteriormente, coloque o código de cálculo da média em uma
função. Em um passo seguinte, realize os controles necessários para não receber notas inválidas. 

*/

#include <stdio.h>
#include <locale.h>

void CalculaMedia(float nota1, float nota2, float nota3){
	
	float media;
	media = ((nota1+nota2+nota3) / 3 );
	
	printf("\n Pela Função:\n");
	if(media >= 6) printf("A media eh %.2f, Aluno Aprovado!",media);
	
	if((media < 6) && (media >=4)) printf("A média é %.2f, Realizar a VS!",media);
	
	if(media < 4) printf("A média é %.2f, Aluno Reprovado!",media);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	float nota1, nota2, nota3, media;
	
	do{
		if(nota1 < 0 || nota2 < 0 || nota3 < 0){
			printf("Nota inválida! Digite novamente!\n\n");
		}
		printf("Digite as 3 notas do Aluno: ");
		scanf("%f %f %f", &nota1, &nota2, &nota3);
	}while (nota1 < 0 || nota2 < 0 || nota3 < 0);
	
	media = ( (nota1 + nota2 + nota3) / 3 );

	if(media >= 6) printf("\nA média é %.2f, Aluno Aprovado!\n",media);
	
	if((media < 6) && (media >=4)) printf("A média é %.2f, Realizar a VS!\n",media);
	
	if(media < 4) printf("A média é %.2f, Aluno Reprovado!\n",media);

	CalculaMedia(nota1,nota2,nota3);
	
	return 0;
}
