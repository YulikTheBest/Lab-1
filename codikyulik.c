#include <stdio.h>

int main() {
    int a, b;

    printf("Введіть перше число: ");
    scanf("%d", &a);

    printf("Введіть друге число: ");
    scanf("%d", &b);

    const int suma = 2 * (a + b);
    const int riznytsia = a - b;
    const int dilennia = (a / (b + (b == 0))) * (b != 0);

    printf("\nПодвоєна сума: %d\n", suma);
    printf("Ціла частина ділення: %d\n", dilennia);
    printf("Різниця: %d\n", riznytsia);

    return 0;
}
