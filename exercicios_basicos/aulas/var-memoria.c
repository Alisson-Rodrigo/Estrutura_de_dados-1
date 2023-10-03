#include <stdio.h>

int main(){
    int a = 10;
    int b,c = 20;

    printf ("%d", &a);
    printf ("%d", &b);
    printf ("%d", &c);
    printf("\n");
    printf ("%d", a);
    printf ("%d", b);
    printf ("%d", c);

    return 0;
}
