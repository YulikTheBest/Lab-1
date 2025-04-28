#include <stdio.h>

int main() {
    int A, B, C;

    // Введення значень змінних
    printf("Введіть A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    A = A + B + C;
    B = A - (B + C);
    C = A - (B + C);
    A = A - (B + C);

    // Виведення змінених значень
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
