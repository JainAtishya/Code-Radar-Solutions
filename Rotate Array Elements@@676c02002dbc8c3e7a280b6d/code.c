// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    for(int i = k-1; i >= 0; k--){
        printf("%d", arr[i]);
    }
    for(int i = 0; i < N-k; i++){
        printf("%d", arr[i]);
    }
    return 0;
}