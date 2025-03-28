// Your code here...
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &N);
    }
    for(int i = 0; i < N; i++){
        if(arr[i] < arr[i+1]){
            // printf("Not Sorted");
            continue;
        }else if(arr[i] > arr[i+1]){
            printf("Not Sorted");
            break;
        }else if(i == (N-1)){
            printf("Sorted");
        }
    }
    return 0;
}