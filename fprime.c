#include <stdio.h>
#include <math.h>   // For sqrt function

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; 
    if (num == 2) return 1; 
    if (num % 2 == 0) return 0;

    int i = 3;
    while (i <= sqrt(num)) {
        if (num % i == 0) return 0;
        i += 2;
    }
    return 1;
}

int main() {
    int n;

    // Input upper limit
    printf("Enter the upper limit (n): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. Please enter an integer >= 2.\n");
        return 1;
    }

    printf("Prime numbers between 1 and %d are:\n", n);

    int num = 2; // Start from the first prime
    while (num <= n) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");

    return 0;
}
