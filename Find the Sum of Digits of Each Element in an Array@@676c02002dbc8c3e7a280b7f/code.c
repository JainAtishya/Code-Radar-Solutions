// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; i++){
        int sum = 0;
        int digit = arr[i];
        while(digit){
            sum += digit % 10;
            digit = digit/10;
        }
        printf("%d ", sum);
    }
    return 0;
}