#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a, b, c;
    double avg;
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c)/ 3;
    printf("Average: %.2lf", avg); 
    return 0;
}