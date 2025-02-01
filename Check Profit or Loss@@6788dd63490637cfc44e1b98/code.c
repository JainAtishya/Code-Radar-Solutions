#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int cp sp;
    if((sp-cp)> 0){
        printf("Profit");
    }else if((sp - cp)< 0){
        printf("Loss");
    }else {
        printf(" No Profiit No Loss");
    }
    return 0;
}