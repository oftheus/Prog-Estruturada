/*QUESTÃO 1

O que será impresso na tela?
int mdc_recursiva(int a, int b) {
printf("\n%d e %d", a, b);
if (a % b == 0) return b;
return mdc_recursiva (b, a % b);
}
int main() {
int a=32, b=18;
printf("\nResultado=%d",mdc_recursiva(a, b));
}

RESPOSTA:

LINHA 1: define a função mdc_recusriva e tem int a e int b como parâmetro 
LINHA 2: imprime o valor de a e b
LINHA 3: se a divisão de a por b for igual a zero, a função retorna b
LINHA 4: retorna a função mdc_recursiva
LINHA 5: cria o main
LINHA 6: defina o valor de a e de b
LINHA 7: o printa o resultado final da função recursiva mdc_recursiva

IMPRIME:    32 e 18
            18 e 14
            14 e 4
            4 e 2
            Resultado 2

*/
