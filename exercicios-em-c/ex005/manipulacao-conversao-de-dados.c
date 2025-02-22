#include <stdio.h>

void conversaoImplicita() {
    int n1 = 10;
    float n2 = 3.5;
    
    printf("Resultado = %.2f\n", n1 + n2);
}

void conversaoExplicita() {
    int n1 = 10;
    int n2 = 3;
    float resultado;
    printf("Resultado = %.2f\n",resultado = (float) n1 / n2);
}

int main() {
    conversaoImplicita();
    conversaoExplicita();
    return 0;
}