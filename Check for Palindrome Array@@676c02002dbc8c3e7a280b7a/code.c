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
    int isPalindrome = 1;
    while(left < right){
        if(arr[left] != arr[right]){
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome){
        printf("YES");
    }else{
        printf("NO");
    }
}