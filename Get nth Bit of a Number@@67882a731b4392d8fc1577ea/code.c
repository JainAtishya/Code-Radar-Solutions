#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    // int bits = sizeof(a)*8;
    if((a >> ( b )) & 1){
        printf("1");
    }else{
        printf("0");
    }
}

