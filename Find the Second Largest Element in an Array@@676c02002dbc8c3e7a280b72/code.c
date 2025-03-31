// // Your code here...
// #include <stdio.h>
// int sorted(int arr[], int N){
//     if(N < 2){
//         return -1;
//     }
//     int largest = arr[0], secondLargest = -1;
//     for (int i = 1; i < N; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }
//     return secondLargest;
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     int arr[N];
//     for(int i = 0; i < N; i++){
//         scanf("%d", &arr[i]);
//     }
//     int secondlargest = sorted(arr, N);
//     printf("%d", secondlargest);
// }


#include <stdio.h>

int sorted(int arr[], int N) {

    int largest = arr[0], secondLargest = -1;

    // Find largest and second largest in one pass
    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if second largest was updated (case when all values are same)
    if (secondLargest == -1) {
        return -1;  // No second largest element found
    }

    return secondLargest;
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        // printf("Array must have at least two elements.\n");
        return -1;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int secondLargest = sorted(arr, N);

    // if (secondLargest == -1) {
    //     printf("No second largest element.\n");
    // } else {
    //     printf("Second largest element: %d\n", secondLargest);
    // }
    printf("%d", secondLargest);

    return 0;
}
