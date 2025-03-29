// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int product = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j){
                continue;
            }
            if(arr[i]*arr[j] > product){
                product = arr[i]*arr[j];
            }
        }
    }
    printf("%d", product);
    return 0;
}