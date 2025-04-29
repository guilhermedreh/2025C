#include <stdio.h>

int main() {
    float metros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    printf("O valor em decimetros e: %.2f\n", metros * 10);
    printf("O valor em centimetros e: %.2f\n", metros * 100);
    printf("O valor em milimetros e: %.2f\n", metros * 1000);

    return 0;
}
