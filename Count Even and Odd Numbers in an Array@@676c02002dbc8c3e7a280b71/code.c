// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int even_count = 0;
    int odd_count = 0;
    for(int i = 0; i < N; i++){
        if(arr[i]%2==0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    printf("%d %d", even_count, odd_count);
    return 0;
}