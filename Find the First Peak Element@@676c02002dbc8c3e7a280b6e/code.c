// // Your code here...
// #include <stdio.h>

// int main(){
//     int N;
//     scanf("%d", &N);
//     int arr[N];
//     for(int i = 0; i < N; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     for(int i = 1; i < N-1; i++){
//         if(arr[0]> arr[1]){
//         printf("%d", arr[0]);
//         break;
//     }
//     if(arr[N-1]> arr[N-2]){
//         printf("%d", arr[N-1]);
//         break;
//     }
//         if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
//             printf("%d", arr[i]);
//             break;
//         }else if(i == N-2){
//             printf("-1");
//         }
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) {
        printf("-1"); // Handling invalid input
        return 0;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // If there's only one element, it's automatically a peak
    if (N == 1) {
        printf("%d", arr[0]);
        return 0;
    }

    // Check for peak elements in the middle first
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    // If no peak was found in the middle, check the first and last element
    if (arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }
    if (arr[N - 1] > arr[N - 2]) {
        printf("%d", arr[N - 1]);
        return 0;
    }

    // If no peak is found
    printf("-1");
    return 0;
}
