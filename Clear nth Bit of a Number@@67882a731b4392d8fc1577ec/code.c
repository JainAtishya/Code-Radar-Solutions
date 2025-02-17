// Your code here...
#include <stdio.h>

int a,b ;
scanf("%d %d", &a, &b);
a = a & ~(1<<b);
printf("%d", a);