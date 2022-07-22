/* 

4) Um funcion�rio da UFF precisa validar as notas de 3 provas fornecidas por um professor e indicar: a m�dia, se est� aprovado/reprovado e se tem direito de realizar a VS.
Inicialmente, fa�a um programa que recebe como entrada as 3 notas e mostre os resultados solicitados. Posteriormente, coloque o c�digo de c�lculo da m�dia em uma
fun��o. Em um passo seguinte, realize os controles necess�rios para n�o receber notas inv�lidas. 

*/

#include <stdio.h>
#include <locale.h>

void CalculaMedia(float nota1, float nota2, float nota3){
	
	float media;
	media = ((nota1+nota2+nota3) / 3 );
	
	printf("\n Pela Fun��o:\n");
	if(media >= 6) printf("A media eh %.2f, Aluno Aprovado!",media);
	
	if((media < 6) && (media >=4)) printf("A m�dia � %.2f, Realizar a VS!",media);
	
	if(media < 4) printf("A m�dia � %.2f, Aluno Reprovado!",media);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	float nota1, nota2, nota3, media;
	
	do{
		if(nota1 < 0 || nota2 < 0 || nota3 < 0){
			printf("Nota inv�lida! Digite novamente!\n\n");
		}
		printf("Digite as 3 notas do Aluno: ");
		scanf("%f %f %f", &nota1, &nota2, &nota3);
	}while (nota1 < 0 || nota2 < 0 || nota3 < 0);
	
	media = ( (nota1 + nota2 + nota3) / 3 );

	if(media >= 6) printf("\nA m�dia � %.2f, Aluno Aprovado!\n",media);
	
	if((media < 6) && (media >=4)) printf("A m�dia � %.2f, Realizar a VS!\n",media);
	
	if(media < 4) printf("A m�dia � %.2f, Aluno Reprovado!\n",media);

	CalculaMedia(nota1,nota2,nota3);
	
	return 0;
}
