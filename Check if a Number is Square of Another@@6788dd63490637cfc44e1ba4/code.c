#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a,b;
    scanf("%d %d", &a, &b);
    int sq = b * b;
    if(sq == a){
        printf("Yes");
    }else {
        printf("No");
    }
    return 0;
}