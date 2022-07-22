/* 

7) Escreva um programa que calcule o salário semanal de um trabalhador. As entradas
são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se
acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas
horas. Acima de 60h há um bônus de 100% para essas horas.

*/

#include <stdio.h>
#include <locale.h>

float CalculaSalario(int horas, float valor, float bonus){
	
	float adicional = 0, aux = 0, salario = 0;
	
	aux = valor * horas;
	adicional = aux * bonus;
	salario = aux + adicional;
	
	return salario;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float valor, salario, bonus;
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%d",&horas);
	
	printf("\nDigite o valor da hora: ");
	scanf("%f",&valor);
	
	if(horas > 40 && horas <= 60){
		
		bonus = 0.50;
		salario = CalculaSalario(horas,valor,bonus);	
	}
	else if(horas > 60){		
		bonus = 1.0;
		salario = CalculaSalario(horas,valor,bonus);
	}
	else{
	
		bonus = 0;
		salario = CalculaSalario(horas,valor,bonus);	
	}
		
	printf("\nO salário final do trabalhador é R$%.2f.\n",salario);
	
	return 0;
}
