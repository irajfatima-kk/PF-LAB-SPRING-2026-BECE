#include <stdio.h>

int main() {
    double num;

   printf("Enter a decimal number: ");
    scanf("%lf", &num);

    printf("\nDefault precision: %f\n", num);
    printf("2 decimal precision: %.2f\n", num);
    printf("5 decimal precision: %.5f\n", num);

    return 0;
}
