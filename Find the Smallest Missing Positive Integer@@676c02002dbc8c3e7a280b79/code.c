// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    // int smallest;
    for(int i = N; i > 0; i--){
        int swaped = 0;
        for(int j = 0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaped = 1;
            }
        }
        if(swaped == 0){
            break;
        }
    }
    int smallest = arr[0];
    for(int i = 0; i < N; i++){
        if(arr[i] == smallest){
            smallest++;
            continue;
        }else{
            printf("%d", smallest);
            break;
        }
    }
    return 0;
}