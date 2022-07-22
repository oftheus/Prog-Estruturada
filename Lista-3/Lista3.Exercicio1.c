/* 

1) Implemente a fun��o calcula_circulo, que calcula a �rea e a circunfer�ncia de um c�rculo de raio r. 
Essa fun��o deve obedecer o prot�tipo: void calc_circulo(float r, float * circunferencia, float * area);
F�rmulas:
A = pi r*r ; c = 2 pi r ; pi = 3.14159265

Note que essa passagem dos 2 �ltimos par�metros � uma passagem por refer�ncia.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14159265F

void calc_circulo(float r, float *circunferencia, float *area){

	*area = PI * r * r;
	
	*circunferencia = 2 * PI * r;
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	float r, area, circunferencia;
	
	printf("Digite o RAIO do c�rculo: ");
	scanf("%f",&r);
	
	calc_circulo(r, &circunferencia, &area);
	
	printf("�rea = %.2f \nCircunfer�ncia = %.2f\n", area, circunferencia);
	
	return 0;
}

