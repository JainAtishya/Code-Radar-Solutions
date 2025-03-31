// // Your code here...
// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
//     int arr[N];
//     for(int )
// }
// #include <stdio.h>
void bubbleSort(int arr[n], int n){
    for(int i = n-1; i > 0; i--){
        int isswaped = 0;
        for(int j = 0; j < i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isswaped = 1;
            }
        }
        if(isswaped == 0){
            break;
        }
    }
}

void printArray(int arr[n], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}