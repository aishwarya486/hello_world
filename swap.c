#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Display original numbers
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    // Display swapped numbers
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}