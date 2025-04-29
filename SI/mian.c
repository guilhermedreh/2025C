#include <stdio.h>
int main()
{
    float n1, n2, n3, media;
    printf("digite a priemira nota\n");
    scanf("%f", &n1);
    printf("digite a priemira nota\n");
    scanf("%f", &n2);
    printf("digite a priemira nota\n");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("notas lidas: %.2f %.2f %.2f\n", n1, n2, n3);
    printf("Minhas nota: %.2f\n", media);
    return 0;
}
