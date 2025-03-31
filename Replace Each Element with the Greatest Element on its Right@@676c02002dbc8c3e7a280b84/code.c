#include<stdio.h>

int main() {
    int N; 
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; i++){
        int gratestelement = 0;
        for(int = j; j < N; j++){
            if(i == N-1){
                gratestelement = -1;
                break;
            }
            if(gratestelement < arr[j]){
                gratestelement = arr[j];
            }
        }
        arr[i] = gratestelement;
    }
    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}