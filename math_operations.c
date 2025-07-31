#include <stdio.h>

// Function to add two numbers without '+'
int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;   // Carry contains common set bits of a and b
        a = a ^ b;            // Sum of bits where at least one of the bits is not set
        b = carry << 1;       // Carry is shifted by one so adding it to a gives the sum
    }
    return a;
}

// Function to subtract two numbers without '-'
int subtract(int a, int b) {
    return add(a, add(~b, 1));  // Add a and two's complement of b (-b)
}

// Function to multiply two numbers without '*'
int multiply(int a, int b) {
    int result = 0;
    while (b > 0) {
        if (b & 1) {
            result = add(result, a);  // Add a to result if the least significant bit of b is 1
        }
        a <<= 1;  // Double a (left shift by 1)
        b >>= 1;  // Halve b (right shift by 1)
    }
    return result;
}

// Function to divide two numbers without '/'
int divide(int a, int b) {
    int quotient = 0;
    int remainder = a;

    while (remainder >= b) {
        remainder = subtract(remainder, b);  // Subtract b from remainder
        quotient = add(quotient, 1);          // Increment quotient
    }

    return quotient;
}

// Function to find modulus of two numbers without '%'
int modulus(int a, int b) {
    int quotient = divide(a, b);  // Get the quotient
    return subtract(a, multiply(quotient, b));  // Return the remainder
}

int main() {
    int x = 20, y = 6;
    
    printf("Addition of %d and %d is: %d\n", x, y, add(x, y));
    printf("Subtraction of %d and %d is: %d\n", x, y, subtract(x, y));
    printf("Multiplication of %d and %d is: %d\n", x, y, multiply(x, y));
    printf("Division of %d by %d is: %d\n", x, y, divide(x, y));
    printf("Modulus of %d and %d is: %d\n", x, y, modulus(x, y));
    
    return 0;
}
