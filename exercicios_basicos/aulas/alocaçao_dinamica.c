#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p,a=10,i;

    p = (int *)malloc(a*sizeof(int));

    for (i=0;i<a;i++) {
        p[i] = i*i;
    }

    for (i=0;i<a;i++) {
        printf ("%d\n", &p[i]);

    }



}