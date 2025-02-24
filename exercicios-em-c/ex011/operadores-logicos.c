#include <stdio.h>

int main() {
    // && (and)
    // || (or)
    // ! (not)

    int a = 10, b = 0;

    if(a > 0 && b > 0) {
        printf("Os dois números são maiores que 0\n");
    } else {
        printf("Pelo menos um dos dois não é maior que zero!\n");
    }

    return 0;
}