#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d", &a);
    if(a&1){
        printf("Set");
    }else {
        printf("Not Set");
    }
    return 0;
}