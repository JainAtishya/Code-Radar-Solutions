// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i =0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = N-1;
    while(left < right){
        if(arr[left] != arr[right]){
            printf("NO");
            break;
        }else if(left+right == N-1){
            printf("YES");
            break;
        }
        left++;
        right--;
    }
    
}