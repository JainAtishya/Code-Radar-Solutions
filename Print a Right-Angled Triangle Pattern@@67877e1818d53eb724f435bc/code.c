#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int N;
    scanf("%d", &N);
    for(int i =1; i <= N; i++) {
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}