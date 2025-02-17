// Your code here...
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Input number
    int lbit = a & (-a);  // Extract the lowest set bit
    printf("%d\n", lbit);  // Output the lowest set bit
    return 0;
}
