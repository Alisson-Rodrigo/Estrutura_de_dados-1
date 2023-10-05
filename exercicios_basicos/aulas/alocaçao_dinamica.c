#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p,a=10,i;

    p = (int *)malloc(a*sizeof(int));

    for (i=0;i<a;i++) {
        p[i] = i*i;
    }

    for (i=0;i<a;i++) {
        printf ("%d\n", p[i]);

    }
    printf ("Acabou\n");

    p = (int *)realloc(p,sizeof(int) * 30);

    for (i;i<40;i++) {
        p[i] = i * i;
    }

    for (i=0;i<40;i++) {
        printf ("%d\n",p[i]);
    }





}