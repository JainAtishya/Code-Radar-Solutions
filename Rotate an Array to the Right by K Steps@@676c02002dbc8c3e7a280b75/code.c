// Your code here...
#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i <N; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        printf("%d", arr[N-1-i]);
    }
    for(int i = 0; i < N-k; i++){
        printf("%d", arr[i]);
    }
}