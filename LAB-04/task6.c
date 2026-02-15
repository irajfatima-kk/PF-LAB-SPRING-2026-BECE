#include <stdio.h>
int main() {
    int marks[5], sum = 0;
    float percentage;
    for(int i=0; i<5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    percentage = sum / 5.0;

    if (percentage >= 85)
        printf("Full Scholarship\n");
    else if (percentage >= 70)
        printf("Partial Scholarship\n");
    else if (percentage >= 50)
        printf("Eligible for Consideration\n");
    else
        printf("Not Eligible\n");

    return 0;
}
