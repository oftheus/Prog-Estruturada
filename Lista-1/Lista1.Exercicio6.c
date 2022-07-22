/* 

6) Implemente uma fun��o que calcule as ra�zes de uma equa��o do segundo grau, 
do tipo ax2 + bx + c = 0. Observa��o: para o c�lculo da raiz quadrada de um n�mero,
utilize a fun��o sqrt. Consulte a documenta��o de como us�-la no programa. 

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

void CalculaRaizes(float a, float b, float c){
	
	float r1,r2,delta;
	
	delta = (b*b) - 4 * a * c;
	printf("delta = %.2f\n",delta);
	
	if(delta < 0){
		printf("A equa��o de 2� grau n�o possui ra�zes reais!\n");
	}
	else{
		r1 = (-b + sqrt(delta))/ (2 * a);
		r2 = (-b - sqrt(delta))/ (2 * a);
	
		printf("Ra�zes: %.2f e %.2f",r1,r2);
	}
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a,b,c;
	
	printf("Digiter os valores de A, B e C: ");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("\nf(x) = %.2fx� + %.2fx + %.2f\n",a,b,c);
	
	CalculaRaizes(a,b,c);
	
	return 0;
}

