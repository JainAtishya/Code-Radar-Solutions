// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int isRepeat = 0;
    for(int i = 0; i < N; i++){
        if(N == 1){
            printf("-1");
            break;
        }
        for(int j = 0; j < N; j++){
            if(i==j){
                continue;
            }
            if(arr[i] == arr[j]){
                printf("%d", arr[i]);
                isRepeat = 1;
                break;
            }else if(i == N-1 & j == N-2){
                printf("-1");
            }
        }
        if(isRepeat){
            break;
        }
    }
    return 0;
}