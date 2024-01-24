#include <stdio.h> 

int main() { 
    double first, second; 

    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    printf("Sum: %lf\n", first + second);
    printf("Difference: %lf\n", first - second);
    printf("Product: %lf\n", first * second);
    
    if (a != 0) {
        printf("Quotient: %lf\n", first / second);
    } else { 
        printf("Cannot divide by 0.\n");
    }

    return 0;
}