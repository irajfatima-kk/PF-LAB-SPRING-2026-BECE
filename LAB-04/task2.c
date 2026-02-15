#include <stdio.h>
int main() {
    int data;
    printf("Enter total GB used: ");
    scanf("%d", &data);

    if (data <= 50)
        printf("Basic User\n");
    else if (data <= 150)
        printf("Standard User\n");
    else
        printf("Heavy User\n");

    return 0;
}
