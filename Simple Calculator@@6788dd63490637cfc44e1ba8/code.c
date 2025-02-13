// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d %c", &a, &operator, &b);
    if(operator == '+'){
        int sum = a+b;
        printf("%d", sum);
    }else if(operator == '-'){
        printf("%d", (a - b));
    }else if(operator == '*'){
        printf("%d", (a * b));
    }else{
        printf("%d", (a/b));
    }
    return 0;
}