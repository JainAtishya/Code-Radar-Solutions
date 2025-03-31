// Your code here...
#include <stdio.h>
int sorted(int arr[], int N){
    int isswapped;
    for(int i = N-1; i > 0; i--){
        isswapped = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isswapped = 1;
            }
        }
    }
    if(isswapped){
        return arr[N-2];
    }else{
        return -1;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int secondlargest = sorted(arr, N);
    printf("%d", secondlargest);
}