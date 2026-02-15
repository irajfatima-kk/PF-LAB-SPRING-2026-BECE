#include <stdio.h>

int main() {
    int userInt;
    float userFloat;
    char userChar;

    printf("Enter an integer: ");
    scanf("%d", &userInt);

    printf("Enter a float: ");
    scanf("%f", &userFloat);

    printf("Enter a character: ");
    scanf(" %c", &userChar); 

    printf("\nYou entered:\n");
    printf("Integer: %d\n", userInt);
    printf("Float: %f\n", userFloat);
    printf("Character: %c\n", userChar);

    return 0;
}
