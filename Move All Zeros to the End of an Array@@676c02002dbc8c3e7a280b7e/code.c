// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int last = N-1;
    int newarr[N];
    newarr[0] = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] == 0){
            newarr[last] = arr[i];
            last--;
        }else{
            newarr[i] = arr[i];
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d ", newarr[i]);
    }
    return 0;
}