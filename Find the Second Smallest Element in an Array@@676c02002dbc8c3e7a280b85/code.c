// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int smallestelement = 0;
    int secondsmallest = -1;
    for(int i = 0; i < N; i++){
        int smallest = 0;
        for(int j = 0; j < N; j++){
            if(i ==j){
                continue;
            }
            if(arr[i] < arr[j]){
                smallest = 1;
            }else{
                smallest = 0;
                break;
            }
        }
        if(smallest){
            secondsmallest = smallestelement;
            smallestelement = arr[i];
        }
    }
    printf("%d", secondsmallest);
    return 0;
}