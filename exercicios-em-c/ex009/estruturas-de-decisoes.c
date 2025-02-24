#include <stdio.h>

int main () {

    int n1,n2;

    n1 = 7;
    n2 = 6;

    if(n1 > n2) {
        printf("N1 é maior que N2!");
    }else if(n2 > n1) {
        printf("N2 é maior que N1!");
    }else {
        printf("Ambos sao iguais!");
    }
    
    return 0;
}