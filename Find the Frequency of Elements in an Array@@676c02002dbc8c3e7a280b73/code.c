// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; i++){
        int freq = 0;
        for(int j = 0; j < N; j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        printf("%d %d", arr[i], freq);
    }
}