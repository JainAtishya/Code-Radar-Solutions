#include <stdio.h>
// #include <math.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d", &a);
    if ((a == 0) || (a == 1)){
        printf("Not Prime");
    }else if(a == 2){
        printf("Prime");
    }
    // }else if((a % 2 == 0)|| (a % 3 == 0)){
    //     printf("Not Prime")
    // }
    else{
        for(int i = 2; i <a; i++){
            if(a % i != 0){
                printf("Prime");
                break;
            }else{
                printf("Not Prime");
                break;
            }
        }
    }
    return 0;
}