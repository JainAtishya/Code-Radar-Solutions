#include <stdio.h>
#include <math.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a;
    scanf("%d", &a);
    if((a <= 1)){
        printf("Not Prime");
    }
    if(a == 2) {
        printf("Prime");
    }
    for(int i = 2; i < sqrt(a);i++){
        if(a % i == 0){
            printf("Not Prime");
            break;
        }else{
            printf("Prime");
            break;
        }
    }
    return 0;
}