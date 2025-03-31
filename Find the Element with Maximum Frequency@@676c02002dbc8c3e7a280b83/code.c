// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int highestfreqelement = 0;
    int highestfreq = 0;
    for(int i = 0; i < N; i++){
        int freq = 0;
        for(int j = 0; j < N; j++){
            if(i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                freq++;
            }
        }
        if(highestfreq < freq){
            highestfreq = freq;
            highestfreqelement = i;
        }else if(highestfreq == freq){
            if(arr[i] < arr[highestfreqelement]){
                highestfreqelement = i;
            }
        }
    }
    printf("%d", arr[highestfreqelement]);
    return 0;
}