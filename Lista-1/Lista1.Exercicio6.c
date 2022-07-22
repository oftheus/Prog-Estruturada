/* 

6) Implemente uma função que calcule as raízes de uma equação do segundo grau, 
do tipo ax2 + bx + c = 0. Observação: para o cálculo da raiz quadrada de um número,
utilize a função sqrt. Consulte a documentação de como usá-la no programa. 

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

void CalculaRaizes(float a, float b, float c){
	
	float r1,r2,delta;
	
	delta = (b*b) - 4 * a * c;
	printf("delta = %.2f\n",delta);
	
	if(delta < 0){
		printf("A equação de 2º grau não possui raízes reais!\n");
	}
	else{
		r1 = (-b + sqrt(delta))/ (2 * a);
		r2 = (-b - sqrt(delta))/ (2 * a);
	
		printf("Raízes: %.2f e %.2f",r1,r2);
	}
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a,b,c;
	
	printf("Digiter os valores de A, B e C: ");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("\nf(x) = %.2fx² + %.2fx + %.2f\n",a,b,c);
	
	CalculaRaizes(a,b,c);
	
	return 0;
}

