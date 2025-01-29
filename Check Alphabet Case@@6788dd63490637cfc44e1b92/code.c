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
    }else if((ch >= 'a') && (ch <= 'z')){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}