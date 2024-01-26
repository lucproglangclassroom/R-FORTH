#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Calculates the size of the array 
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    double average = (double)sum / size; 

    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);

    return 0;
}