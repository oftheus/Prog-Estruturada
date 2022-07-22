#include <stdio.h>
#include <stdlib.h>

void f1 ( int v) {
    v = v + 1; // v = 1 + 1 = 2
    printf ("f1 = %d\n " , v ); //f1 = 2
}
void f2 ( int *v) {
    *v = *v + 1; //v = 1 + 1 = 2
    printf ("f2 = %d\n " , *v ); //f2 = 2
}
int f3 ( int v) {
    v = v + 1; // v = 2 + 1 = 3
    printf ("f3 = %d\n " , v ); //f3 = 3
    return v;
}
int main (void) {
    int v = 1;
    f1 ( v ); //passagem por valor, logo após a execução da função, v continua com o valor 1
    f2 (&v ); //passagem por referência, logo após a execução da função, v recebe o valor 2
    v = f3 ( v ); //passagem por valor, logo após a execução da função, v recebe o valor de f3 = 3
    printf ("main = %d \n" , v ); //main = 3
    return 0;
}

