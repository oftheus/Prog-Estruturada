/* 

8) O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer
um programa para obter todos os números de 4 algarismos com a mesma característica do
número 3025.

*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

int num = 1000;
      while(num <= 9999){
                if(num == ( ( (num / 100) + (num % 100) ) * ( (num / 100) + ( num % 100 ) ) ) )
                       printf("%d: %d + %d = %d -> %d * %d = %d \n", num, num/100, num%100, (num/100)+(num%100), (num/100)+(num%100), (num/100)+(num%100), num);
                num = num + 1;
      }
	
	return 0;
}
