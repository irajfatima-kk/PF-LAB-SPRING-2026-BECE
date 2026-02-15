#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double a, b;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("5.Square\n6.Cube\n7.Square Root\n8.Power\n9.Absolute Value\n10.Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: scanf("%lf %lf", &a, &b); printf("Result: %.2lf\n", a+b); break;
        case 2: scanf("%lf %lf", &a, &b); printf("Result: %.2lf\n", a-b); break;
        case 3: scanf("%lf %lf", &a, &b); printf("Result: %.2lf\n", a*b); break;
        case 4: scanf("%lf %lf", &a, &b);
                if(b==0) printf("Error: Division by zero\n");
                else printf("Result: %.2lf\n", a/b); break;
        case 5: scanf("%lf", &a); printf("Square: %.2lf\n", a*a); break;
        case 6: scanf("%lf", &a); printf("Cube: %.2lf\n", a*a*a); break;
        case 7: scanf("%lf", &a);
                if(a<0) printf("Error: Negative square root\n");
                else printf("Square Root: %.2lf\n", sqrt(a)); break;
        case 8: scanf("%lf %lf", &a, &b); printf("Power: %.2lf\n", pow(a,b)); break;
        case 9: scanf("%lf", &a); printf("Absolute: %.2lf\n", fabs(a)); break;
        case 10: scanf("%lf %lf", &a, &b);
                 if(b==0) printf("Error: Modulus by zero\n");
                 else printf("Modulus: %.0lf\n", fmod(a,b)); break;
        default: printf("Invalid Choice\n");
    }

    return 0;
}
