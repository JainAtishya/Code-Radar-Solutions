#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    char ch;
    scanf("%c", &ch);
    if((ch >= 'A') && (ch <= 'Z')){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}