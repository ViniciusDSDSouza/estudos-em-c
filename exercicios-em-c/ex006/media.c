#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("\nDigite a 1° Nota: ");
    scanf("%f",&n1);

    printf("\nDigite a 2° Nota: ");
    scanf("%f",&n2);

    printf("\nDigite a 3° Nota: ");
    scanf("%f",&n3);

    media = (n1 + n2 + n3) / 3;

    printf("1° nota: %.2f\n2° nota: %.2f\n3° nota: %.2f\nMédia: %.2f", n1, n2, n3, media);
    return 0;
}