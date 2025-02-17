#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int bits = sizeof(n)*8;
    if(n >> (bits - 1)&1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    retrun 0;
}