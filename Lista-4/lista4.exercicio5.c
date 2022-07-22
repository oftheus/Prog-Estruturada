#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcula_corrida(float dist, float *b1, float *b2);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Por favor insira a distância percorrida\n>");
    float dist = 0.0;
    scanf("%g", &dist);
    float b1, b2;
    calcula_corrida(dist, &b1, &b2);
    printf("Bandeira um: %g\nBandeira dois: %g", b1, b2);
    return 0;
}

void calcula_corrida(float dist, float *b1, float *b2){
    *b1 = 4.95f + dist*2.5f;
    *b2 = 4.95f + dist*3.0f;
}