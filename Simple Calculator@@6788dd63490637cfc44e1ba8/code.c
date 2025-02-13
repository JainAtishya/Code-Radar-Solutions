#include <stdio.h>

int main() {
    int a, b;
    char operator;

    // Corrected scanf format
    scanf("%d %c %d", &a, &b, &operator);

    // Handling different operators
    if (operator == '+') {
        printf("%d", a + b);
    } else if (operator == '-') {
        printf("%d", a - b);
    } else if (operator == '*') {
        printf("%d", a * b);
    } else if (operator == '/') {
        if (b == 0) {
            printf("Error! Division by zero.");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Invalid operator!");
    }

    return 0;
}
