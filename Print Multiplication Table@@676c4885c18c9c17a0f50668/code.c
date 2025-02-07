#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int N;
    scanf("%d", &N);
    for(int i = 1;i <= 10;i++){
        printf("%d x %d = %d\n",N, i, N*i );
    }
    return 0;
}