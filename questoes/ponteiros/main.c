#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x_val = 10;
    int j_val = 10;
    int *x = &x_val;
    int *j = &j_val;

    if (x > j) {
        printf("x > j\n");
        printf("x = %p\n", x);
    }
    else {
        printf("x < j\n");
        printf("j = %p\n", j);
    }
}