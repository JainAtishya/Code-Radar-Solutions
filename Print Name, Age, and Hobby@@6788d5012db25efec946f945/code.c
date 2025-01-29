#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    char name[100];
    int age;
    char hobby;
    scanf("%s %d %s", &name, &age, &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: &s\n", hobby);
    return 0;
}