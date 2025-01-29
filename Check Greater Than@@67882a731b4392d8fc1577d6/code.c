#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a, b;
    scanf("%d %d", &a, &b);
    bool ans = a > b;
    printf("%b", ans);
    return 0;
}