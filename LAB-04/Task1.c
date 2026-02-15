#include <stdio.h>
int main() {
    int attendance;
    printf("Enter practice attendance percentage: ");
    scanf("%d", &attendance);

    if (attendance >= 75)
        printf("Selected for Tournament\n");
    else
        printf("Not Selected\n");

    return 0;
}
