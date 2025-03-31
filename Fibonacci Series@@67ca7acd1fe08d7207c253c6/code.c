// Your code here...
void fibonacciSeries(int n){
    int first = 0, second = 1, next;
    printf("%d ", first);
    for(int i = 1; i <= n; i++){
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next); 
    }
}