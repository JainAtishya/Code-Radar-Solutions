#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a,b,c,greatest,sum;
    if((a>b) && (a>c)){
        greatest = a;
        sum = b + c;
    }else if(b>c){
        greatest = b;
        sum = a + c;
    } else {
        greatest = c;
        sum = a + b;
    }
    if(sum>= greatest) {
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}