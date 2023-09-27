#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Os valores lidos sao iguais\n");
    } else {
        if (a > b) {
            printf("%d eh maior que %d\n", a, b);
            if (a % b == 0) {
                printf("%d e multiplo de %d\n", a, b);
            } else {
                printf("%d nao e multiplo de %d\n", a, b);
            }
        } else {
            printf("%d eh maior que %d\n", b, a);
            if (b % a == 0) {
                printf("%d e multiplo de %d\n", b, a);
            } else {
                printf("%d nao e multiplo de %d\n", b, a);
            }
        }
    }

    return 0;
}