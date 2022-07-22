/* 3. Escrever um programa que declare, inicialize e imprima um vetor de 10 inteiros. O
vetor deve conter os 10 primeiros múltiplos de 5. A inicialização do vetor e a sua
impressão devem ser feitas por funções. Generalize para um vetor de n elementos. */

#include <stdio.h>

void multiplos(int n){
    int *vetor[n], i=0,j=1;
    for (i;i<n;i++){
        vetor[i]= 5 * j;
        j++;
    }
    printf("vetor = ");
    for (i=0;i<n;i++){
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int n;
    printf("Digite a quantidade de numeros do vetor: ");
    scanf("%d",&n);
    multiplos(n);
    return 0;
}
