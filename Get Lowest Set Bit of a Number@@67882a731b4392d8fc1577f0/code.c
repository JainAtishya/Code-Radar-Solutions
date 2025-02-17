// Your code here...
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int lbit= a & (-a);
    printf("%d", lbit);
}