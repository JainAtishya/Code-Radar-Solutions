#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int n ;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        // int num = 1;
        for(int j = 1; j <= n-i ; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d", j);
            num++;
        }
        for(int j = i-1; j>=1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}