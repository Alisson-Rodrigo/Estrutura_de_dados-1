#include <stdio.h>
#include <stdlib.h>

int main () {
    int *num2,i;

    num2 = (int *) malloc( 20 * sizeof(int));

    for (i=0;i<20;i++) {
        scanf("%d",&num2[i]);
    }

    for (i=0;i<20;i++) {
        printf ("%d", num2[i]);
    }

    free(num2);



}