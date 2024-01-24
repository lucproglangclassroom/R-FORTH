#include <stdio.h> 

int main() { 
    double a, b; 

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Sum: %lf\n"+ (a + b));
    printf("Difference: %lf\n" + (a - b));
    printf("Product: %lf\n" + (a * b));
    
    if (a != 0) {
        printf("Quotient: %lf\n" + (a / b));
    } else { 
        printf("Cannot divide by 0.\n")
    }
}