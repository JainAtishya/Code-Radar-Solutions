// Your code here...
// #include <stdio.h>

int isPrime(int num) {
    if(num<2){
        return 0;
    }
    if(num = 2){
        return 1;
    }
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }else if(i != num){
            return 1;
        }
    }
} 

// int main() {
//     int t;
//     scanf("%d", &t);
//     while(t--) {
//         int num;
//         scanf("%d", &num);
//         printf("%d\n", isPrime(num));
//     }
//     return 0;
// }