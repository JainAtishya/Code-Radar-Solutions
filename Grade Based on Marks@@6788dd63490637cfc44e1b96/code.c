#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int num;
    char grade;
    scanf("%d", &num);
    if(num>=90){
        grade = 'A';
    } else if((num >= 80) && (num<90)){
        grade = 'B';
    }else if((num >= 70) && (num < 80)){
        grade = 'C';
    }else if((num>=60) && (num < 70)){
        grade = 'D';
    }else {
        grade = 'F'
    }
    printf("%c", grade);
    return 0;
}