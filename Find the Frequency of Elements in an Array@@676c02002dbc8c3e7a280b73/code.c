// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int visited[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    
    for(int i = 0; i < N; i++){
        int freq = 0;
        if(visited[i] == 1){
            continue;
        }
        for(int j = 0; j < N; j++){
            if(arr[i]==arr[j]){
                freq++;
            }
            visited[j] = 1;
        }
        printf("%d %d\n", arr[i], freq);
        // newarr[i] = arr[i];
    }
    return 0;
}