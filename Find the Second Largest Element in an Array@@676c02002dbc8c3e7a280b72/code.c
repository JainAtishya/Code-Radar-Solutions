// Your code here...
#include <stdio.h>
#include <limits.h>
int sorted(int arr[], int N){
    if(N < 2){
        return -1;
    }
    int largest = arr[0], secondLargest = INT_MIN;
    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN) {
        return -1;  // No second largest element
    }
    return secondLargest;
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


