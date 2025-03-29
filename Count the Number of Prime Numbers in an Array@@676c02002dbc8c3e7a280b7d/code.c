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
        if(arr[i] == 2){
            count++;
            continue;
        }
        for(int j = 2; j < arr[i]; j++){
            if(arr[i]%j==0){
                continue;
            }else if(j == arr[i]-1){
                count++;
            }
        }
    }
    printf("%d", count);
}