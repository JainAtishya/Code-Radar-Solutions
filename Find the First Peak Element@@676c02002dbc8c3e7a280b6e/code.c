// Your code here...
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < N-1; i++){
        if((arr[i] > arr[i-1]) & (arr[i] > arr[i+1])){
            printf("%d", arr[i]);
            break;
        }else if(i == N-2){
            printf(-1);
        }
    }
    return 0;
}