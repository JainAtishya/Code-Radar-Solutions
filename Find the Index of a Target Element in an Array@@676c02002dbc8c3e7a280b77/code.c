// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int T;
    scanf("%d", &T);
    for(int i = 0; i < N; i++){
        if(arr[i] == T){
            printf("%d", i);
            break;
        }else if(i == N-1){
            printf("-1");
        }
    }

}