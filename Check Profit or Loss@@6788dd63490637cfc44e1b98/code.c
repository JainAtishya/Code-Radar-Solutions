#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int cp, sp;
    scanf("%d  %d", &cp, &sp);
    if(sp> cp){
        printf("Profit");
    } else if (sp < cp){
        printf("Loss");
    } else {
        printf("No Profit No Loss");
    }
}