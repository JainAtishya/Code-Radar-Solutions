// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int second_largest = arr[0];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i] > arr[j]){
                second_largest = largest;
                largest = arr[j];
            }
        }
    }
    printf("%d", second_largest);
}