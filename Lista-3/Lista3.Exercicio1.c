/* 

1) Implemente a função calcula_circulo, que calcula a área e a circunferência de um círculo de raio r. 
Essa função deve obedecer o protótipo: void calc_circulo(float r, float * circunferencia, float * area);
Fórmulas:
A = pi r*r ; c = 2 pi r ; pi = 3.14159265

Note que essa passagem dos 2 últimos parâmetros é uma passagem por referência.
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
	
	printf("Digite o RAIO do círculo: ");
	scanf("%f",&r);
	
	calc_circulo(r, &circunferencia, &area);
	
	printf("Área = %.2f \nCircunferência = %.2f\n", area, circunferencia);
	
	return 0;
}

