#include <stdio.h>

int main() {
    // int: -2 147 483 648 até 2 147 483 647
    // long int: -2 147 483 648 até 2 147 483 647
    // long long int: -9 223 372 036 854 775 808 a 9 223 372 036 854 775 807

    // unsigned: reserva os valores negativos como positivos
    // unsigned int: 0 até 4 294 967 295
    // unsigned long int: 0 até 4 294 967 295
    // unsigned long long int: 0 até 18 446 744 073 709 551 615

    int n1 = 2147483647;
    printf("\nint: -%i até %i\n", n1, n1);
    long int n2 = 2147483647;
    printf("long int: -%li até %li\n", n2, n2);
    long long int n3 = 9223372036854775807;
    printf("long long int: -%lli até %lli\n", n3, n3);
    unsigned int n4 = 4294967295;
    printf("unsigned int: 0 até %u\n", n4);
    unsigned long int n5 = 4294967295;
    printf("unsigned long int: 0 até %lu\n", n5);
    unsigned long long int n6 = 18446744073709551615;
    printf("unsigned long long int: 0 até %llu\n", n6);

    return 0;
}