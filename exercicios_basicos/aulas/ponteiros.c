#include <stdio.h>

int main(){
    int a = 10;
    int *p1, *p2;

    p1 = &a;
    p2 = p1;

    printf("a = %d\n", a);

    *p2 = 20;

    printf("a = %d\n", a);

    return 0;
} 