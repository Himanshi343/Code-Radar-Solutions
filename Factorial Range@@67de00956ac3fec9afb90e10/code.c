// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// void factorialRange(int x, int y){
//     for (int i=x; i<=y; i++){
//         int fact = factorial(i);
//         printf("%d",fact);
//     }
// }

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

// Function to print factorials in the range [x, y]
void factorialRange(int x, int y) {
    if (x > y || x < 0 || y < 0) {
        printf("Invalid range\n");
        return;
    }
    for (int i = x; i <= y; i++) {
        int fact = factorial(i);
        printf("%d\n",fact); // Output formatting
    }
}