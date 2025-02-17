#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Get the number of bits in the integer
    int bits = sizeof(a) * 8;
    
    // Check if b is a valid bit position
    if (b < 1 || b > bits) {
        printf("Invalid bit position\n");
        return 1;  // Exit with error code if b is out of range
    }

    // Extract the b-th bit (1-indexed)
    if ((a >> (b - 1)) & 1) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
