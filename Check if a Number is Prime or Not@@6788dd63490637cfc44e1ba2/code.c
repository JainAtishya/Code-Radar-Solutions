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
    
    for(int i = 2; i < a;i++){
        if(a % i == 0){
            printf("Not Prime");
            break;
        }else{
            printf("Prime")
        }
    }
    return 0;
}