// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] < 2){
            continue;
        }
        for(int j = 2; j < arr[i]; j++){
            if(arr[i]%j==0){
                continue;
            }else{
                count++;
            }
        }
    }
    printf("%d", count);
}