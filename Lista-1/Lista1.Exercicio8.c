/* 

8) Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10,
R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e
determine o menor número de notas para se obter o montante fornecido. A função deve
ter o seguinte protótipo: int total_de_notas(int valor); 

*/

#include <stdio.h>
#include <locale.h>

int total_de_notas(int valor){
	
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

	do{		
		if(valor >= 100){
		
			valor-=100;			
			n100++;
		}
		else if(valor >= 50){
		
			valor-=50;
			n50++;
		}
		else if(valor >= 20){

			valor-=20;		
			n20++;
		}
		else if(valor>=10){
	
			valor-=10;	
			n10++;
		}
		else if(valor>=5){
		
			valor-=5;
			n5++;
		}
		else if(valor>=2){
		
			valor-=2;
			n2++;
		}
		else if(valor>=1){
		
			valor-=1;
			n1++;
		}
	}while(valor!=0);

	printf("%d nota(s) de R$100.\n%d nota(s) de R$50.\n%d nota(s) de R$20.\n%d nota(s) de R$10.\n%d nota(s) de R$5.\n%d nota(s) de R$2.\n%d nota(s) de R$1.\n", n100, n50, n20, n10, n5, n2, n1);
	
	return 0;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Digite um valor: ");
	scanf("%d",&valor);
	
	total_de_notas(valor);
	
	return 0;
}

