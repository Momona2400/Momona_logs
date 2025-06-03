#include<stdio.h>

void main() {
    int n = 111;  // or any number you want to convert
    int sum = 0, a = 1;

    // Continue dividing until n becomes 0
    while (n > 0) {
        sum += ((n % 2) * a);  // Add the binary digit multiplied by the place value
        n = n / 2;              // Divide n by 2
        a *= 10;                // Move the place value (units -> tens -> hundreds -> etc.)
    }

    printf("%d", sum);  // Print the binary representation
}
